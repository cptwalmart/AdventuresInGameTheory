#include <stdio.h>

#include "game.h"

void set_tile(board_cell *c, int tile) {
    c->tiles[0] = tile;
    c->n_tiles = 1;
}

int index_to_level(int index) {
    return index / 4;
}

void init_game(game *g, int n_players) {
    int i;
    for(i = 0; i < 32; i++) set_tile(&g->board[i], i / 2);
    for(i = 0; i < n_players; i++) {
        g->players[i].position = -1;
        g->players[i].direction = DIRECTION_DOWN;
        g->players[i].in_play = 1;
    }

    g->n_players = n_players;
    g->air = 25;
    g->round = 0;
}

void player_loses(game *g, int player_index) {
    g->players[player_index].in_play = 0;
}

void step(game *g, int player_index) {
    move given_move = g->players[player_index].callback(&g, player_index);

    int treasure_count = 0;
    int i;
    for(i = 0; i < 32; i++) {
        if(g->players[player_index].held_tokens[i]) {
            treasure_count++;
        }
    }

    g->air -= treasure_count;

    if(given_move.switch_direction) {
        if(g->players[player_index].direction == DIRECTION_DOWN) {
            g->players[player_index].direction = DIRECTION_UP;
        } else {
            player_loses(g, player_index);
        }
    }

    if(g->air > 0) {
        // play continues
    } else {
        // round ends
    }
}
#ifndef GAME_H
#define GAME_H

#define DIRECTION_UP 1
#define DIRECTION_DOWN -1

typedef struct board_cell_t {
    int tiles[3];
    int n_tiles;
} board_cell;

typedef struct move_t {
    int switch_direction;
    int tokens_to_drop[32];
    int pick_up;
} move;

typedef struct player_t {
    int position;
    int direction;
    int held_tokens[32];
    int in_play;
    move (*callback(game, int));
} player;

typedef struct game_t {
    board_cell board[32];
    player players[6];
    int n_players;
    int air;
    int round;
} game;

#endif
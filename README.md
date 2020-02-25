# AdventuresInGameTheory

This project is to attempt to solve the game theory for the board game Deep Sea Adventure.

Players 2-6
2d3
Level 1 Tokens - #0-3; Level 2 Tokens - #4-7; Level 3 Tokens - #8-11; Level 4 Tokens - #12-15
There are 2 of each numbered token for a total of 32 tokens (16x2)

The players all share a single submarine while diving for treasure. Since they all share this submarine, they also share an air supply. The air supply is set to 25 at the beginning of each round. The game is played over the course of 3 rounds, with players adding up their treasure tokens for their points at the end of the game.

Turn Progression:
1) Reduce Air - Reduce air supply by the number of treasure tokens you hold; player who causes it to go to 0 finishes turn.
2) Declare Direction - Choose to continue further down or the reverse your direction. Once you reverse direction you cannot later choose to go back down.
Movement - A player rolls the dice and moves a number of spaces equal to the result on the die, minus the number of treasures you hold. If he would move to a space containing another player, don't count that space.
Treasure - If you land on a space with a treasure, you may choose to pick it up and replace it with an X tile. If you land on a spot with an X you may choose to drop a treasure on it. Or you may pass.
End of Round:
If you are on the ship, you do not remove air on your turn. If you fail to return to the ship before it runs out of air, you 'drown' and drop all of your treasure at the end of the path. You create piles of upto three tokens with all drowned players treasures, and place them at the end of the path. These piles count as a single treasure for purposes of movement and air reduction in further rounds.

Remove all x's from the track.

The player who was deepest when the round ended, or last on the sub goes first in the next round.

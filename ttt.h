//include guard, protects from duplicate function definitions
#ifndef TTT_H
#define TTT_H
#include <stdlib.h>
#include <string>
#include <time.h>
#include <iostream>

/* declares 3x3 board and symbols. initiates end game string variables 
 extern is used so other source files can use these variables */

extern char board[3][3];
extern char human;
extern char computer;
extern char empty;
extern std::string drawString;
extern std::string winString;
extern std::string loseString;

/*  AI logic and ai's do move function */

void determine_move();
void ai_move(int h, int k);

/* human input and do move */

void get_coords();
void do_move(int x, int y);

/* declares the game over check, which checks if the game is over */
bool gameOver();

/* declares function to print board, check if spot is empty, and make board*/
void print_board();
bool spotEmpty(int x, int y);
void make_board();

#endif /* TTT_H */

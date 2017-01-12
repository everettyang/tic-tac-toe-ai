#include <iostream>
#include "ttt.h"
/* This script contains the function for constructing the tic tac toe board. */

// "-" = no piece
char board[3][3];
char human = 'X';
char computer = 'O';
char empty = '-';

void print_board()

// this function creates the 3x3 board

{

	//prints the board
	
	std::cout << "\t" << "1\t" << "2\t" << "3\t";

	std::cout << "\n";

	std::cout << "1" << "  \t" << board[0][0] << "\t" << board[1][0] << "\t" << board[2][0] << std::endl;
	std::cout << "2" << "  \t" << board[0][1] << "\t" << board[1][1] << "\t" << board[2][1] << std::endl;
	std::cout << "3" << "  \t" << board[0][2] << "\t" << board[1][2] << "\t" << board[2][2] << std::endl;
}

bool spotEmpty(int x, int y)
{
	 return (board[x][y] == empty);
}

void make_board()
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = empty;
		}
	}
}

	

#include "ttt.h"

//declares end game string variable
std::string drawString = "DRAW";
std::string winString = "YOU WIN!!";
std::string loseString = "DUMB COMPUTER WINS!!";

bool gameOver()
{
	
	//6 non-diagonal ways to win
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != empty)
			{
				if (i == 0 || j == 0)
				{
					// if there is 3 in a row then game ends.
					if (board[i][j] == board[i][j+1] && board[i][j] == board[i][j+2] ||
					board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j])
					{
						
						if (board[i][j] == human)
							{	
							std::cout << winString << std::endl;
							}
						else
							{
							std::cout << loseString << std::endl;
							}

						return true;
					}
				}
			}
		}

	}

	//diagonal check
	if (board[2][2] != '-')
	{
		if (board[2][2] == board[1][1] && board[2][2] == board[0][0])
			{
			if (board[2][2] == human)
			{
				std::cout << winString << std::endl;
			}
			else
			{
				std::cout << loseString << std::endl;
			}

			
			return true;
			}
	}
	//second diagonal
	if (board[2][0] != '-')
	{
		if (board[2][0] == board[1][1] && board[2][0] == board[0][2])
		{
			if (board[2][0] == human)
			{
				std::cout << winString << std::endl;
			}
			else
			{
				std::cout << loseString << std::endl;
			}
			
			return true;
		}
		

	}


	
	//checks if board has any empty spaces
	for (int i = 0; i < 3; i++)
	{
	
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == empty)
			{
				i = j = 3;break;
			}
		}

	
	if (i == 2) {std::cout << drawString << std::endl;return true;}
	

	}

	return false;

}

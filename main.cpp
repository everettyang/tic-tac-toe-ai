#include "ttt.h"

//game loops until gameOver function returns true, then the loop breaks and the script terminates.
int main()
{
	srand(time(NULL));
	make_board();
	print_board();
	while (!(gameOver()))
	{
		get_coords();
		if (gameOver())
		{
			print_board();
			break;
		}
		determine_move();
		print_board();
	}
	
	return 0;
}

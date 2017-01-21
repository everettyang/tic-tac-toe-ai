#include "ttt.h"

//human input and do move definitions
void do_move(int x, int y)
{

 if (spotEmpty(x, y))
{
	board[x][y] = human;
}
 else
{
	//if space is occupied, invoke get_coord again until input coord is not occupied.
	std::cout << "Space is occupied" << std::endl;
	get_coords();
}
}

void get_coords()
{
	// gets the coords and checks to see if its between 1 and 3
	int x, y;

	while (std::cout << "Enter X coordinate (1-3): "  && !(std::cin >> x) || 1 > x || x > 3)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Invalid, please enter a number between 1 and 3.\n" << std::endl;
	}
	

	while(std::cout << "Enter Y coordinate (1-3): " && !(std::cin >> y) || 1 > y || y > 3)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Invalid, please enter a number between 1 and 3.\n" << std::endl;
	}
	
	//clears input buffer
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	//parse so array can use without going out of range.
	x -= 1;
	y -= 1;
	
	//call do_move and inputs the parsed x and y as argument
	do_move(x, y);

}




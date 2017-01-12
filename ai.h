/* declares AI logic and ai's do move function */
void determine_move();

void ai_move(int h, int k)
// writes move to the board and then prints the board
{
	if (spotEmpty(h, k))
	{
		board[h][k] = computer;
	}
	else
	{
		determine_move();
	}
}

void determine_move ()
//ai picks coords at random; does not respond intelligently.
{

	int h, k;	
	h = (rand() % 3);
	k = (rand() % 3);
	ai_move(h, k);

}



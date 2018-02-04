// Thus file consist of code to play Minesweeper

#include"myHeader.cpp"
int minesweeperPlayer(char myGrid[][25], char realGrid[][25], int row, int col, int size)
{
	int count;
	
	// Stop recursion if any mine comes in contact
	if(myGrid[row][col] != '-')
		return 0;
	
	if(!checkMine(realGrid, row, col))
	{
		count = countAdjacentMines(realGrid, size, row, col);
		myGrid[row][col] = count + '0';
		if(!count)
		{
			if(checkValid(row-1, col, size))
			{
				if(!checkMine(realGrid, row-1, col))
					minesweeperPlayer(myGrid, realGrid, row-1, col, size);
			}
			
			if(checkValid(row+1, col, size))
			{
				if(!checkMine(realGrid, row+1, col))
					minesweeperPlayer(myGrid, realGrid, row+1, col, size);
			}

			
			if(checkValid(row, col-1, size))
			{
				if(!checkMine(realGrid, row, col-1))
					minesweeperPlayer(myGrid, realGrid, row, col-1, size);
			}
			
			if(checkValid(row, col+1, size))
			{
				if(!checkMine(realGrid, row, col+1))
					minesweeperPlayer(myGrid, realGrid, row, col+1, size);
			}	
			
			if(checkValid(row-1, col-1, size))
			{
				if(!checkMine(realGrid, row-1, col-1))
					minesweeperPlayer(myGrid, realGrid, row-1, col-1, size);
			}
			
			if(checkValid(row-1, col+1, size))
			{
				if(!checkMine(realGrid, row-1, col+1))
					minesweeperPlayer(myGrid, realGrid, row-1, col+1, size);
			}				
			
			if(checkValid(row+1, col-1, size))
			{
				if(!checkMine(realGrid, row+1, col-1))
					minesweeperPlayer(myGrid, realGrid, row+1, col-1, size);
			}		
			
			if(checkValid(row+1, col+1, size))
			{
				if(!checkMine(realGrid, row+1, col+1))
					minesweeperPlayer(myGrid, realGrid, row+1, col+1, size);
			}
		}
		return 0;
	}

	// If particular location in grid has mine
	// then show all mines and declare Game Over
	else
	{
		for(int i = 0; i < size; i++)
		{
			for(int j = 0; j < size; j++)
			{
				if(checkMine(realGrid, i, j))
					myGrid[i][j] = '*';
			}
		}
		printGrid(myGrid, size);
		cout << "Game Over";
		exit(0);
		return 0;
	}
}

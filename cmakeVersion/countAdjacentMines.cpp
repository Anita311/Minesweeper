// This file consist of code for counting the adjacent mines
// for a square

#include"myHeader.cpp"
int countAdjacentMines(char realGrid[][25], int size, int row, int col)
{
	int count = 0;
	
	// Check for mine justabove the square
	if(checkValid(row-1, col, size))
	{
		if(checkMine(realGrid, row-1, col))
			count++;
	}
	
	// Check for mine just below the square
	if(checkValid(row+1, col, size))
	{
		if(checkMine(realGrid, row+1, col))
			count++;
	}	
	
	// Check for mine at right side of square
	if(checkValid(row, col + 1, size))
	{
		if(checkMine(realGrid, row, col + 1))
			count++;
	}	
	
	// Check for mine at left side of square
	if(checkValid(row, col - 1, size))
	{
		if(checkMine(realGrid, row, col - 1))
			count++;
	}	
	
	// Check for mine at above left diagonal of square
	if(checkValid(row - 1, col - 1, size))
	{
		if(checkMine(realGrid, row - 1, col - 1))
			count++;
	}
	
	// Check for mine at above right diagonal of square
	if(checkValid(row - 1, col + 1, size))
	{
		if(checkMine(realGrid, row-1, col+ 1))
			count++;
	}
	
	// Check for the mine at below left diagonal of square
	if(checkValid(row + 1, col - 1, size))
	{
		if(checkMine(realGrid, row + 1, col - 1))
			count++;
	}	
	
	// Check for the mine at below right diagonal of square
	if(checkValid(row + 1, col + 1, size))
	{
		if(checkMine(realGrid, row + 1, col + 1))
			count++;
	}
	
	return count;
}

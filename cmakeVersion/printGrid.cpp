// This file contains code to display
// Minesweeper Grid

#include"myHeader.cpp"
void printGrid(char myGrid[][25], int size)
{
	cout << "   ";
	for(int i = 0; i < size; i++){
			cout << i <<  "   ";
	}	
	cout << endl;	
	for(int i = 0; i < size; i++)
	{
		if(i < 10)
			cout << i << "  " ;
		else
			cout << i << " ";
		for(int j = 0; j < size; j++)
		{
			cout << myGrid[i][j] << " " << "|" << " ";
			if(j >= 10)
				cout << " ";	
		}
		cout << endl;
	}
}

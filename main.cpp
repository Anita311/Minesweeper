// This file consists of main function to 
// drive the complete code

#include"myHeader.cpp"
int main()
{
	int choice, mines, size, row, col, win = 0;
	char realGrid[25][25], myGrid[25][25], flag;
	cout << "\t\t\tWelcome to Minesweeper " << endl;
	cout << " Instructions : " <<  endl << endl;
	cout << "Enter your move in the format : 1 2" << endl;
	cout << "To flag some location, simply hit f and enter it's location" << endl;
	cout << endl;
	cout << "Press 1 for Beginners level " << endl;
	cout << "Press 2 for Medium level " << endl;
	cout << "Press 3 for Expert level " << endl;
	cin >> choice;
	
	if(choice == 1)
	{
		size = 9;
		mines = 10;
	}
	
	if(choice == 2)
	{
		size = 16;
		mines = 40;
	}
	
	if(choice == 3)
	{
		size = 25;
		mines = 99;
	}	
	generateMinesweeper(realGrid, myGrid, size, mines);
	int m = mines;
	printGrid(myGrid, size);
	cout << endl;
	
	// Play until to win
	while(!win){
		cout << endl << "Enter the location you want to unlock : ";	
		row = flag;
		cin  >> row >> col ;
		cout <<  endl;
		if(checkValid(row, col, size))
		{
			win = minesweeperPlayer(myGrid, realGrid, row, col, size);
			printGrid(myGrid, size);
			int n = unknownsLeft(myGrid, size);
			if(win == 1 && n == mines)
			{
				cout << "Yeah babe..!!, You did it";
				win = 1; 
			}
		}
		else
			cout << "Enter valid location ";
		cout << endl << "Do you want to flag a certain location : Y/N";
		cin >> flag	;
		if(toupper(flag) == 'Y'){
			cout << endl << "Enter the location you want to flag : ";
			cin >> row >> col ;
			if(checkValid(row, col, size))
				myGrid[row][col] = '#';
			printGrid(myGrid, size);	
			m-- ;
			cout << endl << "  Mines Left : " << m;
		}		
	}
	return 0; 
}	
	// Function to check unknown left
	int unknownsLeft(char myGrid[][25], int size)
	{
		int c = 0;
		for(int i = 0; i < size; i++)
		{
			for(int j = 0; j < size; j++)
			{
				if(myGrid[i][j] == '-')
					c++;
			}
		}
		return c;
	}
	
	// Function to check if the entered dimension is valid or not
	int checkValid(int row, int col, int size)
	{
		if(row < size && col <size)
			return 1;
		else
			return 0;
	}
	
	// Function to check for the presence for any mine
	int checkMine(char realGrid[][25], int row, int col)
	{
		if(realGrid[row][col] == '*')
			return 1;
		else
			return 0;
	}


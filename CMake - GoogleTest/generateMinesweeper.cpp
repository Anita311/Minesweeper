// Thus file consist of code to initialise Minesweeper Grid
// for the players and asign mines to certain random position

#include"myHeader.cpp"
void generateMinesweeper(char realGrid[][25], char myGrid[][25], int size, int mines)
{
	// To generate different arrangement every single time
	srand(time (NULL));
	int x, y;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			realGrid[i][j] = myGrid[i][j] = '-';
		}
	}
	
	while(mines)
	{
		x = rand() % size;
		y = rand() % size;
		
		if(realGrid[x][y] != '*'){
			realGrid[x][y] = '*';
			mines--;
		}	
	}
}

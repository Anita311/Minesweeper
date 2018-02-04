// This file consists of all required header files and
// declaration of all functions used in the complete code

#include<iostream>
#include<stdlib.h>
using namespace std;
int minesweeperPlayer(char myGrid[][25], char validGrid[][25], int, int, int);
int checkValid(int, int, int);
void printGrid(char myGrid[][25], int);
int checkMine(char realGrid[][25], int, int);
int countAdjacentMines(char realGrid[][25], int, int, int);
void generateMinesweeper(char realGrid[][25], char myGrid[][25], int, int);
int unknownsLeft(char myGrid[][25], int);

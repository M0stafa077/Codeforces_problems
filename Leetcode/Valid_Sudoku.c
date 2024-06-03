/**
 * @file Valid_Sudoku.c
 * @author Mostafa Asaad (https://github.com/M0stafa077)
 * @brief Problem number 36 on Leetcode. 
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValidInput(char c)
{
	return (((c >= '0') && (c <= '9')) || (c == '.'));
}

bool isValidColumn(char** board, const int rowSize, const int colSize)
{
	int row = 0, col = 0;
	for(col = 0; col < colSize; ++col)
	{
		int hashMap[10] = { 0 };
		for(row = 0; row < rowSize; ++row)
		{
			if(!isValidInput(board[row][col]) )
					{ /*puts("FLASE FROM COLUMNS CHECKING, INVALID INPUT");*/ return false;  }

			if(board[row][col] == '.')
				{ continue; }

			if(1 <= hashMap[board[row][col] - '0'])
			{ 
				printf("FLASE FROM COLUMNS CHECKING HASHMAP with row %d, col %d, val %d\n", 
						row, col, board[row][col] - '0'); 
				return false; 
			}
			else
				{ ++(hashMap[board[row][col] - '0']); }
		}
	}
	// puts("TRUE FROM COLUMNS CHECKING");
	return true;
}

bool isValidRow(char** board, const int rowSize, const int colSize)
{
	int row = 0, col = 0;
	for(row = 0; row < rowSize; ++row)
	{
		int hashMap[10] = { 0 };
		for(col = 0; col < colSize; ++col)
		{
			if(!isValidInput(board[row][col]))
					{ /*puts("FLASE FROM ROWS CHECKING")*/; return false; }

			if(board[row][col] == '.')
				{ continue; }

			if(1 <= hashMap[board[row][col] - '0'])
				{ /*printf("FLASE FROM ROWS CHECKING HASHMAP row %d, col %d, val %c\n", row, col, board[row][col]);*/ return false; }
			else
				{ (hashMap[board[row][col] - '0'])++; }
		}
	}
	// puts("TRU	E FROM ROWS CHECKING\n");
	return true;
}

bool isValidSquare(char** board, const int rowSize, const int colSize)
{
	int row = 0, col = 0;
	for(row = 0; row < rowSize; row += 3)
	{
		for (col = 0; col < colSize; col += 3)
		{
			int hashMap[10] = { 0 };
			for(int i = 0; i < 3; ++i)
			{
				for(int j = 0; j < 3; ++j)
				{
					if('.' == board[row + i][col + j])
						{ continue; }
						
					if(1 <= hashMap[board[row + i][col + j] - '0'])
						{ return false; }
					else
						{ ++hashMap[(board[row + i][col + j]) - '0']; } 
				}
			}
		}		
	}
	return true;
}

bool isValidSudoku(char** board, int boardSize, int* boardColSize) 
{
	return (isValidColumn(board, 9, 9) && isValidRow(board, 9, 9)) && isValidSquare(board, 9, 9);
}

int main(int argc, char* argv[])
{
	char board[9][9] = {
        {'.', '.', '.', '.', '5', '.', '.', '1', '.'},
        {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
        {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
        {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
        {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
        {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
        {'.', '.', '4', '.', '.', '.', '.', '.', '.'}
    };

    char* boardPtrs[9] = { NULL };
	for (int i = 0; i < 9; i++) 
		{ boardPtrs[i] = board[i]; }
    
	int x = 9;
	if(isValidSudoku(boardPtrs, x, &x))
		{ printf("%s\n", "TRUE"); }
	else
		{ printf("%s\n", "FALSE"); }
	return 0;
}

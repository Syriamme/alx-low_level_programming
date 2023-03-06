#include "main.h"
/**
 *print_chessboard - printing a chessboard
 *@a: a two dimensional array
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar ("%c ", a[row][col]);
		}
		_putchar ("\n");
	}
}

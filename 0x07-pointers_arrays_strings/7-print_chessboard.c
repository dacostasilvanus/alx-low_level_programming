#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @: Pointer to chessboard
 *
 * Return: Void
 */
void print_chesssboard(char (*a)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}


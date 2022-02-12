#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98 followed
 *	by a new line.
 * @n: Number to start from.
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
		}
		printf("\n");
	}
}


#include "main.h"
/**
 * print_diagonal(int n) - print diagona
 * @n: number of times to print \
 * Return: diagonal
 */
void print_diagonal(int n)
{
	if  (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			_putchar('\n');
		}
	}
}



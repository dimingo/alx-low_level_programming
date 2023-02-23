#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9 exluding 2 and  4
 * Return: numbers
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - print single digits 2,
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
    	{
        	putchar(i);
    	}
		putchar('\n');
	return (0);
}

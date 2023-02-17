#include <stdio.h>
/**
 * main - print single integer ,
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

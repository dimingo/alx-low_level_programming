#include "main.h"
/**
 * print_rev - print string in reverse
 * @s : pointer to s as char
 * Return: Nothing
 */
void print_rev(char *s)
{
	while (*s)
	{
		printf("%c", *s);
		s--;
	}
	printf("\n");
}

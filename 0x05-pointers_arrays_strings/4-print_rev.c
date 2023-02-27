#include "main.h"
/**
 * print_rev - print string in reverse
 * @s : pointer to s as char
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i,len;	
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

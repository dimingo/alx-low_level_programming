#include "main.h"
/**
 * print_rev - print string in reverse
 * @s : pointer to s as char
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, len, j;

	for (i=0; *s != '\0'; s++)
		i++;
	len = i;

	while (len > 0)
	{
		printf("%c", *(s +  len-1));
		len--;
	}
	printf("\n");
}

#include "main.h"
#include "stdio.h"
/**
 * _puts - prints a string to stdout
 * @str : takes string pointer as input
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}

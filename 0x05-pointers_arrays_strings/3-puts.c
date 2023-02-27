#include "main.h"
#include "stdio.h"
/**
 * _puts - prints a string to stdout
 * @str : takes string pointer as input
 * Return: Nothing
 */
void _puts(char *str)
{
	char a[] = *str;

	printf("%s", a);
	printf("\n");
}

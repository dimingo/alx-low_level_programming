#include "main.h"
#include "stdio.h"
/**
 * _puts - prints a string to stdout
 * @str : takes string pointer as input
 * Return: Nothing
 */
void _puts(char *str)
{
	int n;

	for (n = 0; *str != '\0'; n++)
		printf("%c", *str);
		n++;
	printf("\n");
}

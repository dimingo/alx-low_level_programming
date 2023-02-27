#include "main.h"
/**
 * _strlen - Get the length of a string
 * @s : pointer to s as a char
 * Description: none
 * Return: return int
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}


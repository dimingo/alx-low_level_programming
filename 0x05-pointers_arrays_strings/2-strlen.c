#include "main.h"
/**
 * _strlen(char *s) - Get the length of a string
 * @s : pointer to s as a char
 * Retun: return 0
 */
int _strlen(char *s)
{
	int n;

	for(n = 0; *s != '\0'; s++)
		n++;
	return n;
}


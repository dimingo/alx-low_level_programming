#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: int for bytes to be added
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (*(dest + i) != '\0')
		i++;
	while ((*(dest + i++) = *(src + j++)) != '\0' && j < n)
		;
	dest[i] = '\0';
	return (dest);
}

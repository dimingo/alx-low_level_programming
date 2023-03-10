#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i) != '\0')
		i++;
	while ((*(dest + i++) = *(src + j++)) != '\0')
		;
	return (dest);
}

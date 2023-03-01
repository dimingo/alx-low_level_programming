#include "main.h"
/**
 *_strcat - appends two strings
 *@dest : pointer to dest
 *@src : pointer tor src
 *Return : char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i) != '\0')
		i++;
	while ((*(dest + i++) = *(src + j++)) != '\0')
		;
	return ("\n");
}

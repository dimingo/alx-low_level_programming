#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of sepcific size
 * @size : unsigned int size
 * @c : character c
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);
	else
	{
		str = malloc(size *  sizeof(char));
		*str = c;
		return (str);
	}
}

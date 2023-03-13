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
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size *  sizeof(char));

	for (; i < size; i++)
		*(str + i) = c;
	return (str);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  copy of the string given in as a parameter
 * @str: string pointer
 *
 * Return: NUll if str is empty or pointer to str
 */
char *_strdup(char *str)
{
	int len, i;
	char *str2, *p;

	p = str;
	len = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*p != '\0')
	{
		len++;
		p++;
	}

	str2 = (char *) malloc(len * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	for (; i < len;  i++)
	{
		*(str2 + i) = *str;
		str++;
	}
	*(str2 + len) = '\0';
	return (str2);
}

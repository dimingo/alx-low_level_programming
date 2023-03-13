#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - return a newly allocated space containing s2 and s2
 * @s1 : string 1
 * @s2 : string 2
 *
 * Return: NULL or pointer to memory space
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, i, j, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2  = "";
	}

	len1 = len2 = i = j = 0;
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	while (*(s1 + i) != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

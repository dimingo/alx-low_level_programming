#include "main.h"
/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[13 ] = {' ', '\t', '\n', ',', ';', '.','!', '?', '"', '(', ')', '{', '}'};

	i = j = 0;

	for (; s[i]  != '\0'; i++)
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s -= 32
		for  (j = 0; j < 13; j++)
			if (s[i] == sep[j])
				s[i + 1] -= 32;
	return (a);
}

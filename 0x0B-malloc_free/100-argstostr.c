#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *argstostr - concatenates all the arguments of your program,
 * @ac: srguments count
 * @av: first argument
 *
 * Return: Pointer to new String
 */
char *argstostr(int ac, char **av)
{
	char *str, *arg;
	int length, pos, i, j;

	length = i = pos = 0;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	for (; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	length++;
	str = malloc(length * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;

	for (; j < ac; j++)
	{
		arg = av[j];
		while (*arg != '\0')
		{
			str[pos] = *arg;
			pos++;
			arg++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[pos	+ 1] = '\n';
	return (str);
}

#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program,
 * @ac: srguments count
 * @av: first argument
 *
 * Return: Pointer to new String
 */
char *argstostr(int ac, char **av)
{
	char *newStr, *arg;
	int length, pos, i, j;

	length = i = poss = 0;

	if ((ac == 0) || (**av == NULL))
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

	for (; j < ac; i++)
	{
		*arg = av[i];
		while (*arg != '\0')
		{
			str[pos] = *arg++;
		}
		str[pos++] = '\0';
	}
	str[pos	- 1] = 0;
	return (str);
}

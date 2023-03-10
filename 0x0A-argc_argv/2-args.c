#include <stdio.h>
#include <stdlib.h>

/**
 * main - print filename
 * @argc : count of the arguments supplied to the program
 * @argv : array of pointers to the strings which are those arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}

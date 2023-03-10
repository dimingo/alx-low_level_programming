#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int num1, num2, result;

	if ((argc - 1) < 2 || (argc - 1) > 2)
	{
		printf("Error\n");
		return (1);
	}
	if ((argc - 1) == 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
	}
	printf("%d\n", result);
	return (0);
}

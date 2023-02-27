#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a : pointer to int a
 * @b : pointer to int b
 * Return : nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdlib.h>
#include "main.h"

/**
 * *alloc_grid - return 2D array of integer
 * @width: int width
 * @height: int height
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int **rectangle, i, j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	rectangle = malloc(height * sizeof(int *));
	if (rectangle == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		rectangle[i] = malloc(width * sizeof(int));
		if (rectangle[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(rectangle[j]);
			}
			free(rectangle);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			rectangle[i][j] = 0;
		}
	}
	return (rectangle);
}

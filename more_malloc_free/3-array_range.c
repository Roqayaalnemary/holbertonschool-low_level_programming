
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned long count;
	unsigned long i;

	if (min > max)
		return (NULL);

	count = (unsigned long)((long)max - (long)min) + 1;

	if (count > ((size_t)-1) / sizeof(int))
		return (NULL);

	array = malloc(sizeof(int) * count);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		array[i] = (int)((long)min + (long)i);

	return (array);
}


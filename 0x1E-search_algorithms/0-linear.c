#include "search_algos.h"

/**
 *linear_search - searches for a value in an array of integers
 *using the Linear search algorithm
 *
 *@array: Pointer to the first element in an array
 *@size: Number of elements in an array
 *@value: Value being searched for
 *
 * Return: 0 on success and -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

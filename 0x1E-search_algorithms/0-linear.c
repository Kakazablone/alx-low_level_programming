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
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, (int)array[i]);
		if (array[i] == value)
		{
			break;
			return (i);
		}
	}
	return (-1);
}

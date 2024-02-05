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
	int found = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, (int)array[i]);
		if (array[i] == value)
		{
			printf("Found [%d] at index: [%lu]\n", value, i);
			found = 1;
			break;
		}
	}
	if (found == 0)
		return (-1);

	return (i);
}

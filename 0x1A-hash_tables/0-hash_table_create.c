#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: number of hash table buckets/slots to create
 *
 * Return: address of new hash table, or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int index;

	if (size == 0)
		return (NULL);
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}

	newtable->size = size;
	for (index = 0; index < size; index++)
		newtable->array[index] = NULL;
	return (newtable);
}

#include "hash_tables.h"

/**
  * hash_table_get - looks through the array for key and value
  * @ht: the hash table
  * @key: the key to look for
  * Return: value associated with key or NULL if nothing
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	search = ht->array[index];
	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
			return (search->value);
		search = search->next;
	}
	return (NULL);
}

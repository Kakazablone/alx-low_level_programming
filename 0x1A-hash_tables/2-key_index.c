#include "hash_tables.h"

/**
  * key_index - finds the index of the key
  * @key: the string going to be stored
  * @size: the size of the array
  * Return: the index element
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}

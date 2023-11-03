#include "hash_tables.h"

/**
  * shash_table_create - creates a hash table
  * @size: the size of the array
  * Return: the hash table when successful or NULL on failure to malloc
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/*Assign each element of array to NULL*/
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
  * shash_table_set - Inserts a key and value in the array
  * @ht: the hash table
  * @key: the key to put in the array
  * @value: the value ot assign to they key
  * Return: 1 if succeeded, 0 if not
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *search;
	shash_node_t *new_node;
	unsigned long int index = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	search = ht->array[index];
/*Updates a key already in the list*/
	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
		{
			free(search->value);
			search->value = strdup(value);
			free(new_node);
			return (1);
		}
		search = search->next;
	}
/*Makes a new node in the hash table*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
/*Assigns where the new node goes in array*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	place_in_slist(ht, new_node);

	return (1);
}

/**
  * place_in_slist - places the new node in the sorted list
  * @ht: The hash table
  * @new_node: the new_node
  * Return: nothing, void
  */
void place_in_slist(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *search_slist = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else
	{
		search_slist = ht->shead;
		while (search_slist != NULL)
		{
			if (strcmp(new_node->key, search_slist->key) < 0)
			{
				if (search_slist->sprev == NULL)
					ht->shead = new_node;
				new_node->sprev = search_slist->sprev;
				if (search_slist->sprev != NULL)
					search_slist->sprev->snext = new_node;
				search_slist->sprev = new_node;
				new_node->snext = search_slist;
				return;
			}
			if (search_slist->snext == NULL)
				break;
			search_slist = search_slist->snext;
		}
		new_node->snext = search_slist->snext;
		search_slist->snext = new_node;
		new_node->sprev = search_slist;
		ht->stail = new_node;
	}
}

/**
  * shash_table_get - looks through the array for key and value
  * @ht: the hash table
  * @key: the key to look for
  * Return: value associated with key or NULL if nothing
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *search = NULL;
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

/**
  * shash_table_print - prints a hash table using a sorted linked list
  * @ht: the hash table to print
  * Return: nothing, void
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *printer;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	printer = ht->shead;
	while (printer != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", printer->key, printer->value);
		flag = 1;
		printer = printer->snext;
	}
	printf("}\n");
}

/**
  * shash_table_print_rev - prints hash table using a sorted list in reverse
  * @ht: the hash table to print
  * Return: nothing, void
  */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *printer;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	printer = ht->stail;
	while (printer != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", printer->key, printer->value);
		flag = 1;
		printer = printer->sprev;
	}
	printf("}\n");
}

/**
  * shash_table_delete - frees a hash table
  * @ht: the hash table to free
  * Return: nothing, void
  */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head;
	shash_node_t *next;

	head = ht->shead;
	while (head != NULL)
	{
		next = head->snext;
		if (head->key != NULL)
			free(head->key);
		if (head->value != NULL)
			free(head->value);
		free(head);
		head = next;
	}

	free(ht->array);
	free(ht);
}

#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: the hash table to print
  * Return: nothing, void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				print_list(ht->array[i]);
			flag = 1;
		}
	}
	printf("}\n");
}

/**
  * print_list - prints the singly linked list if a collision occured.
  * Starts at the second element since the first was already printed
  * @list: the head of the list to print
  * Return: nothing, void
  */
void print_list(hash_node_t *list)
{
	/*Move one forward since head was already printed*/
	list = list->next;
	while (list != NULL)
	{
		printf(", ");
		printf("'%s': '%s'", list->key, list->value);
		list = list->next;
	}
}

#include "lists.h"

/**
  *add_node - adds a new node at the beginning of a list_t list.
  *
  *@head: pointer to the lists
  *@str: string to be duplicated and added at the beginning
  *
  *Return: the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t add_node_beg;
	size_t n;

	add_node_beg = malloc(sizeof(list_t));

	if (add_node_beg == NULL)
	{
		return (NULL);
	}

	add_node_beg->str = strdup(str);

	for (n = 0; str[n], n++)
		;
	add_node_beg->len = n;
	add_node_beg->next = *head;
	*head = add_node_beg;

	return (*home);
}

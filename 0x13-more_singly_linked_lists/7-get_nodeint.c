#include "lists.h"

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list
  *
  *@head: pointer to list
  *@index: the index of the node, starting at 0
  *
  *Return: the nth node, if the node does not exist, return NULL
  */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
	{	
		head = head->next;
	}

	if (n < index)
		return (NULL);

	return (head);
}

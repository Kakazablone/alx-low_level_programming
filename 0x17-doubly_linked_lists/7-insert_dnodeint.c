#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a node at the specified index
  *
  * @h: the double pointer to the doubly linked list
  * @idx: the index to insert at
  * @n: the number to assign to the newnode
  *
  * Return: Null if failed, otherwise new node's address
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *newnode;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		if (newnode->next != NULL)
			newnode->next->prev = newnode;
		*h = newnode;
	}
	else
	{
		temp = *h;
		for (i = 0; temp != NULL && i < (idx - 1); i++)
			temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = newnode;
		temp->next = newnode;
	}
	return (newnode);
}

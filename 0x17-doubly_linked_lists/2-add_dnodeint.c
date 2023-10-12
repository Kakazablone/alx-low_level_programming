#include "lists.h"

/**
  * add_dnodeint - Add node to the beginning of doubly linked list
  * @head: double pointer to the beginning of the doubly linked list
  * @n: The number to store in the new element
  * Return: Address of the new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
	return (newnode);
}

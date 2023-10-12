#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at the index
  *
  * @head: double pointer to the list
  * @index: indicates which node to delete
  *
  * Return: 1 if success, -1 if failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
	}
	else
	{
		for (i = 0; temp != NULL && i < index; i++)
			temp = temp->next;
		if (temp == NULL)
			return (-1);
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}

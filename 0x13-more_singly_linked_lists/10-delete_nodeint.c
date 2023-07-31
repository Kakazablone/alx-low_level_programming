#include "lists.h"

/**
  *delete_nodeint_at_index - deletes the node at index index of a listint_t
  *linked list
  *
  *@head: pointer to list
  *@index:index of the node that should be deleted. Index starts at 0
  *
  *Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr = *head;
	unsigned int node;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
	free(ptr);
	return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);

	return (1);
}

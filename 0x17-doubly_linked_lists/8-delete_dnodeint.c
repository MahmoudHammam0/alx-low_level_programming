#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: pointer to head node
 * @index: target node to be deleted
 * Return: 1 Success -1 Failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *del = *head;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		ptr = (*head)->next;
		if (ptr == NULL)
		{
			free(del), del = NULL;
			*head = NULL;
			return (1);
		}
		ptr->prev = NULL;
		free(del), del = NULL;
		*head = ptr;
		return (1);
	}
	while (index > (index - 1) && del)
	{
		del = del->next;
		index--;
	}
	if (del == NULL)
		return (-1);
	ptr = del->next;
	if (ptr == NULL)
	{
		del->prev->next = NULL;
		free(del), del = NULL;
		return (1);
	}
	ptr->prev = del->prev;
	del->prev->next = ptr;
	free(del), del = NULL;
	return (1);
}

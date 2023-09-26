#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at certain index of the list
 *@head: pointer to pointer to first node
 *@index: index at which node will be deleted
 *Return: 1 in case of success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int i;

	if (head == NULL)
		return (-1);
	else if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	for (i = 0; ptr && (i != index); i++)
	{
		prev = ptr;
		ptr = ptr->next;
	}
	prev->next = ptr->next;
	free(ptr);
	return (1);
}

#include "lists.h"
/**
 *pop_listint - deletes first node of linked list and returns its data
 *@head: pointer to pointer to first node of list
 *Return: data in first node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (head == NULL)
		return (0);
	else if (*head == NULL)
		return (0);
	i = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (i);
}

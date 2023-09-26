#include "lists.h"
/**
 *reverse_listint - reverse the linked list
 *@head: pointer to pointer to first node of the list
 *Return: address which points to new reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	if (head == NULL)
		return (NULL);
	else if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	if (prev == NULL)
		return (NULL);
	*head = prev;
	return (*head);
}

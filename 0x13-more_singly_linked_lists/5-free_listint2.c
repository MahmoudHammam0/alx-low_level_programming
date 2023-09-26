#include "lists.h"
/**
 *free_listint2 - free the linked list and sets head to NULL
 *@head: pointer to pointer to the first node of the list
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}

#include "lists.h"
/**
 *free_listint - free the linked list
 *@head: pointer to the first node of the list
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

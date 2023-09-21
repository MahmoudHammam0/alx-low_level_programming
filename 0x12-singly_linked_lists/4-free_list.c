#include "lists.h"
/**
 * free_list -  frees a list_t list
 * @head: head node of the linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

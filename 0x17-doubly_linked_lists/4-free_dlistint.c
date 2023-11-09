#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

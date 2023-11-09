#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of linked list.
 * @head: pointer to head node
 * @index: index of target node
 * Return: address of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	if (index == 0)
		return (head);
	while (index > (index - 1) && temp)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}

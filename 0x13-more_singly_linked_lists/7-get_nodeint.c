#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: pointer to the first node of the list
 *@index: number of node to return its address
 *Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	ptr = head;
	for (i = 0; ptr && (i != index); i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

#include "lists.h"
/**
 *listint_len - calculate the number of elements in a linked listint_t list.
 *@h: head pointer to the first node in linked list
 *Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int n = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}

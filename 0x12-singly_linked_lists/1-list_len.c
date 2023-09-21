#include "lists.h"
/**
 * list_len - return number of elements in linked list
 * @h: pointer to head node of the linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *ptr;

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

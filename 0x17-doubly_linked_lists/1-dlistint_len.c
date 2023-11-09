#include "lists.h"
/**
 * dlistint_len - returns the number of nodes in list.
 * @h: pointer to head node
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int num = 0;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}

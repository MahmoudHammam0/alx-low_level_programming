#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first node of the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int x;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
			break;
		}
	}
	*h = NULL;
	return (n);
}

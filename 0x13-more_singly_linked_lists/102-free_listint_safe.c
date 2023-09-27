#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first node of the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
		l++;
		break;
		}
	}
	*h = NULL;
	return (l);
}

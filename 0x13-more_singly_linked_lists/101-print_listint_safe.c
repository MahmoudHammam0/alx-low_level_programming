#include "lists.h"

/**
 * w - make a new list
 * @old: the old list
 * @size: new list size
 * @new: new node to be added to the list
 * Return: address of the new list
 */
const listint_t **w(const listint_t **old, size_t size, const listint_t *new)
{
	const listint_t **ptr;
	size_t x;

	ptr = malloc(size * sizeof(listint_t *));
	if (ptr == NULL)
	{
		free(old);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		ptr[x] = old[x];
	ptr[x] = new;
	free(old);
	return (ptr);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, n = 0;
	const listint_t **ptr = NULL;

	for ( ; head != NULL; head = head->next)
	{
		for (x = 0; x < n; x++)
		{
			if (head == ptr[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(ptr);
				return (n);
			}
		}
		n++;
		ptr = w(ptr, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
	}
	free(ptr);
	return (n);
}

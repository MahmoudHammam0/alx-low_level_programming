#include "lists.h"

/**
 * new - make a new list
 * @old: the old list
 * @size: new list size
 * @new: new node to be added to the list
 * Return: address of the new list
 */

const listint_t **new(const listint_t **old, size_t size, const listint_t *new)
{
	const listint_t **ptr;
	size_t i;

	ptr = malloc(size * sizeof(listint_t *));
	if (ptr == NULL)
	{
		free(old);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		ptr[i] = old[i];
	ptr[i] = new;
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
	size_t i, n = 0;
	const listint_t **ptr = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == ptr[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(ptr);
				return (n);
			}
		}
		n++;
		ptr = new(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(ptr);
	return (n);
}

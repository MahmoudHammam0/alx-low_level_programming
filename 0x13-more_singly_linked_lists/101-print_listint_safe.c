#include "lists.h"
/**
 *new_list - make a new list of nodes in linked list
 *@old: old list
 *@size: new list size
 *@new: new list listint_t **newlist(const listint_t **old, int size, const listint_t *new) 
 *Return: address of the new made list
 */
const listint_t **newlist(const listint_t **old, int size, const listint_t *new)
{
	const listint_t **ptr;
	int i = 0;

	ptr = malloc(sizeof(listint_t *) * size);
	if (ptr  == NULL)
	{
		free(old);
		exit(98);
	}
	while (i < size)
	{
		ptr[i] = old[i];
	}
	ptr[i] = new;
	free(old);
	return (ptr);
}
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int n = 0;
	int x = 0;
	const listint_t **ptr;

	while (head != NULL)
	{
		while (x < n)
		{
			if (head == ptr[x])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(ptr);
				return (n);
			}
			x++;
		}
		n++;
		ptr = newlist(ptr, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(ptr);
	return (n);
}

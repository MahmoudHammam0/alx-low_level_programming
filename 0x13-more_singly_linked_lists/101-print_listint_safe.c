#include "lists.h"
/**
 *find_loop - find a loop in listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: address where loop start in the list
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *start;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head->next;
	while (ptr != NULL)
	{
		if (ptr == ptr->next)
			return (ptr);
		start = head;
		while (start != ptr)
		{
			if (start == ptr->next)
				return (ptr->next);
			start = start->next;
		}
		ptr = ptr->next;
	}
	return (NULL);
}
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int n = 0, i;
	listint_t *ptr;

	ptr = find_loop((listint_t *)head);
	i = 1;
	while (head != NULL && (head != ptr || i))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head == ptr)
			i = 0;
		head = head->next;
		n++;
	}
	if (ptr != NULL)
		printf("->[%p] %d\n", (void *)head, head->n);
	return (n);
}

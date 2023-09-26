#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head, *ptr2 = head;
	int count = 0;

	if (head == NULL)
		exit(98);
	while (ptr && ptr2 && ptr2->next && head)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
		if (ptr == ptr2)
		{
			printf("->[%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	head = NULL;
	return (count);
}

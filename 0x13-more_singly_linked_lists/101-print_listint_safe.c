#include "lists.h"
/**
 *loop_num - count number of loop nodes in the list
 *@head: pointer to the first node of the list
 *Return: number of loop nodes
 */
int loop_num(const listint_t *head)
{
	const listint_t *ptr, *ptr2;
	int n = 1;

	if (head == NULL)
		return (0);
	else if (head->next == NULL)
		return (0);
	ptr = head->next;
	ptr2 = head->next->next;
	while (ptr2)
	{
		if (ptr == ptr2)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				n++;
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			ptr = ptr->next;
			while (ptr != ptr2)
			{
				n++;
				ptr = ptr->next;
			}
			return (n);
		}
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
	}
	return (0);
}
/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int n, i = 0;

	n = loop_num(head);
	if (n == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			n++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (n);
}

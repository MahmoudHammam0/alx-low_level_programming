#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *@h:head ponter which points to the first node in the list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int n = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}

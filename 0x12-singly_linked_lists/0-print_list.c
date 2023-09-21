#include "lists.h"
/**
 * print_list - print all elements of the list_t list
 * @h: pointer of head node of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int n = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		n++;
		ptr = ptr->next;
	}
	return (n);
}

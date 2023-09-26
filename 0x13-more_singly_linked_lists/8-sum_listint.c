#include "lists.h"
/**
 *sum_listint - calculate the sum of all the in data of the linked list
 *@head: pointer to the first node of the list
 *Return: sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (ptr = head; ptr != NULL; ptr = ptr->next)
	{
		sum += ptr->n;
	}
	return (sum);
}

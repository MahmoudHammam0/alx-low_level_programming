#include "lists.h"

/**
 * find_listint_loop - that finds the loop in a linked list.
 * @head: pointer to the first node of the list
 * Return: The address where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *ptr2;

	ptr = ptr2 = head;
	while (ptr && ptr2 && ptr2->next)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
		if (ptr == ptr2)
		{
			ptr = head;
			break;
		}
	}
	if (ptr == NULL || ptr2 == NULL || ptr2->next == NULL)
		return (NULL);
	while (ptr != ptr2)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	return (ptr2);
}

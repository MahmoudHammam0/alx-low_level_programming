#include "lists.h"
/**
 *insert_nodeint_at_index - insert a new node at a certain index of list
 *@head: pointer to pointer to the first node
 *@idx: position to insert new node in
 *@n: value of data of new node
 *Return:address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	if (idx == 0)
	{
		ptr2->next = *head;
		return (ptr2);
	}
	ptr = *head;
	idx--;
	while (i != idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}

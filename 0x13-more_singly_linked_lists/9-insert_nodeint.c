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
	listint_t *ptr, *temp;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	ptr = *head;
	while (i != idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}

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
	listint_t *ptr;
	listint_t *ptr2;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	else if (*head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	idx--;
	while (i != idx)
	{
		ptr = ptr->next;
		i++;
	}
	ptr2 = ptr->next;
	ptr->next = temp;
	temp->next = ptr2;
	return (temp);
}

#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head node
 * @idx: target index of insertion
 * @n: data of inserted node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1 = *h, *temp2, *node;

	node = malloc(sizeof(struct dlistint_s));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (*h);
	}
	while (idx > (idx - 2) && temp1)
	{
		temp1 = temp1->next;
		idx--;
	}
	if (temp1 == NULL)
		return (NULL);
	temp2 = temp1->next;
	if (temp2 == NULL)
	{
		temp1->next = node;
		node->prev = temp1;
		return (node);
	}
	temp1->next = node;
	temp2->prev = node;
	node->next = temp2;
	node->prev = temp1;
	return (node);
}

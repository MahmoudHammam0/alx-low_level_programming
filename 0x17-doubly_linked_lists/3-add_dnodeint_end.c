#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head node
 * @n: node data
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *ptr;

	ptr = malloc(sizeof(struct dlistint_s));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->prev = NULL;
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	ptr->prev = temp;
	temp->next = ptr;
	return (ptr);
}

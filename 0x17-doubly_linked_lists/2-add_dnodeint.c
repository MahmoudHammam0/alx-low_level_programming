#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a list.
 * @head: pointer to head node
 * @n: node data
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(struct dlistint_s));
	if (ptr == NULL)
		return (NULL);
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	(*head)->prev = ptr;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

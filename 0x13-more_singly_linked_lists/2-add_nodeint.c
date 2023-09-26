#include "lists.h"
/**
 *add_nodeint - add a node to the begininng of the list
 *@head: pointer to pointer which points to the first node
 *@n: value of data to be added to the new node
 *Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

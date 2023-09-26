#include "lists.h"
/**
 *add_nodeint_end - add node at the end of list
 *@head: pointer to pointer points to the first node of the list
 *@n: value of data to be added in the new node
 *Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
			;
		ptr->next = temp;
	}
	return (temp);
}

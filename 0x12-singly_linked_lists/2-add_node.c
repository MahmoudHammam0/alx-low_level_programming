#include "lists.h"
/**
 * add_node - add a node to the begginning of the linked list
 * @head: pointer to pointer to head node of linked list
 * @str: string to be duplicated in new node
 * Return: address of head updated to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(struct list_s));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

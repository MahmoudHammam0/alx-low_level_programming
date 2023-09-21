#include "lists.h"
/**
 * add_node_end - add a node to the end of the linked list
 * @head: pointer to pointer of head node of the linked list
 * @str: string to be duplicated in new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *end;

	end = malloc(sizeof(struct list_s));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = strlen(str);
	end->next = NULL;
	if (*head == NULL)
		*head = end;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
	}
	ptr->next = end;
	return (end);
}

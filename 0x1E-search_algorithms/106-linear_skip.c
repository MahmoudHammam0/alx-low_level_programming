#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value using the Jump search algorithm.
 * @list: head pointer to header node
 * @value: value to search for in the list
 * Return: pointer to node with the same value or null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *exp;

	if (list == NULL)
		return (NULL);
	prev = list;
	exp = prev->express;
	while (exp->n < value && exp->express != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				exp->index, exp->n);
		prev = exp;
		exp = exp->express;
	}
	printf("Value checked at index [%ld] = [%d]\n", exp->index, exp->n);
	if (exp->express == NULL && exp->n < value)
	{
		prev = exp;
		while (exp->next != NULL && exp->n < value)
			exp = exp->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, exp->index);
	while (prev->index <= exp->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		if (prev == NULL)
			break;
	}
	return (NULL);
}

#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value using the Jump search algorithm.
 * @list: head pointer to header node
 * @size: size of the list
 * @value: value to search for in the list
 * Return: pointer to node with the same value or null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *step;
	int jump;

	if (list == NULL)
		return (NULL);
	prev = step = list;
	jump = sqrt(size);
	while (step->n < jump)
		step = step->next;
	jump = 0;
	while (step->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				step->index, step->n);
		prev = step;
		jump += sqrt(size);
		while (jump > 0)
		{
			if (step->next == NULL)
				break;
			step = step->next;
			jump -= 1;
		}
		if (step->next == NULL)
			break;
	}
	printf("Value checked at index [%ld] = [%d]\n", step->index, step->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, step->index);
	while (prev->index <= step->index)
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

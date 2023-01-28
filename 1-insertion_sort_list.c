#include "sort.h"

/**
 * insertion_sort_list - Implementation of the insertion sort
 * @list: head node of the list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *active, *prev, *buff;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
		return;

	prev = *list;
	active = prev->next;
	while (active)
	{
		buff = active->next;
		prev = active->prev;
		while (prev && prev->n > active->n)
		{
			prev->next = active->next;
			if (active->next)
				active->next->prev = prev;
			active->prev = prev->prev;
			if (prev->prev)
				prev->prev->next = active;
			prev->prev = active;
			active->next = prev;

			prev = active->prev;
			if (prev == NULL)
				*list = active;
			print_list(*list);
		}
		active = buff;
		if (!buff)
			return;
	}
}

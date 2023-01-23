#include "sort.h"
/**
 * bubble_sort - Implements the bubble sort algorithm
 * @array: the array to be sorted
 * @size: length of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int *first, *second, third;

	if (size < 2)
		return;
	for (i = size - 1; i > 0; i--)
	{
		first = array;
		second = (array + 1);
		j = 0;
		while (j < i)
		{
			if (*first > *second)
			{
				third = *second;
				*second = *first;
				*first = third;

				print_array(array, size);
			}

			j++;
			first++;
			second++;
		}
	}
}

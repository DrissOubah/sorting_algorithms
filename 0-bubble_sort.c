#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using Bubble Sort.
 *
 * @array: The array to be sortty.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, sortty;

	if (!array || size == 0)
		return;
	do {
		sortty = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sortty = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}while (sortty == 0);
}

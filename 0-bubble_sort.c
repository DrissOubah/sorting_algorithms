#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using Bubble Sort.
 *
 * @array: The array to be sortty.
 * @size: The size of the array.
 * Return : void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, lenght = size;
	bool bubbles = false;

	if (array == NULL || size < 2)
		return;

	while (bubbles == false)
	{
		bubbles = true;
		for (i = 0; i < lenght - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbles = false;
			}
		}
		lenght--;
	}
}

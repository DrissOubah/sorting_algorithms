#include "sort.h"
/**
 * swap - Swaps two elements in an array.
 *
 * @array: The array to be modified.
 * @i: Index of the first element.
 * @j: Index of the second element.
 * @size: Size of the array.
 */
void swap(int *array, int i, int j, size_t size)
{
	int temp;

	if (i != j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
/**
 * partition - Partitions the array.
 *
 * @array: The array to be partitioned.
 * @low: Index of the low element.
 * @high: Index of the high element.
 * @size: Size of the array.
 * Return: Index of the pivot.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j, size);
		}
	}
	swap(array, i + 1, high, size);
	return (i + 1);
}
/**
 * quick_sort_recursive - Recursive function for Quick Sort.
 *
 * @array: The array to be sorted.
 * @low: Index of the low element.
 * @high: Index of the high element.
 * @size: Size of the array.
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array using the Quick Sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: Size of the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}

#ifndef SORT_H
#define SORT_H


#include <stddef.h>
#include <stdlib.h>

/* Print Functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting Algorithms Functions */

void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);

#endif /* SORT_H */

#include "sort.h"
/**
 * quick_sort - Quick sort algorithm
 * @array: Array to be sorted
 * @size: Array size
 */
void quick_sort(int *array, size_t size)
{
	qui_sort(array, 0, size - 1, size);
}

/**
 * qui_sort - Quick sort algorithm implementation
 * @array: Array to be sorted
 * @low: lower index
 * @high: higher index
 * @size: Array size
 * Return:
 */
void qui_sort(int *array, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		qui_sort(array, low, part - 1, size);
		qui_sort(array, part + 1, high, size);
	}
}

/**
 * partition - Function that makes the partition of array
 * @array: Array
 * @low: lowwer index
 * @high: higher index
 * @size: Array size
 * Return: Index to make partition
 */
size_t partition(int *array, int low, int high, size_t size)
{
	int aux, pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		aux = array[i + 1];
		array[i + 1] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

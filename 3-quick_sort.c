#include "sort.h"

/**
 * quick_sort - quicksort function
 * @array: Array to be sorted
 * @size: Array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - recursive sort function
 * @array: Array to be sorted
 * @size: Array size
 * @low: Lower limit
 * @high:  higher limit
 */
void sort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, high, size);
	}
}

/**
 * partition - Return the index to make the partition
 * @array: Array to be sorted
 * @size: Array size
 * @low: Lower limit
 * @high: Higher limit
 * Return: return index to pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, temp_var;

	pivot = array[high];

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp_var = array[i];
				array[i] = array[j];
				array[j] = temp_var;
				print_array(array, size);
			}
		}
	}
	i++;
	if (i != j)
	{
		temp_var = array[i];
		array[i] = array[high];
		array[high] = temp_var;
		print_array(array, size);
	}
	return (i);
}

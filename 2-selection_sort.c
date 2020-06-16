#include "sort.h"


/**
 * selection_sort - Function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp, min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1 ; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}

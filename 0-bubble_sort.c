#include "sort.h"


/**
 * bubble_sort - Function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int j;
	int aux;
	bool is_sorted = false;

	if (array == NULL || size < 2)
		return;

	while (is_sorted != true)
	{
		is_sorted = true;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
				is_sorted = false;
			}
		}
	}
}

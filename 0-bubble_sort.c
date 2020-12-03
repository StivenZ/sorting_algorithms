#include "sort.h"
/**
 * bubble_sort - sorting algorithm
 * @array: array of integers
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t a = 1;
	size_t b;
	int pos_1 = 0;

	while (a == 1)
	{
		if (array == NULL)
			break;
		a = 0;
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				pos_1 = array[b];
				array[b] = array[b + 1];
				array[b + 1] = pos_1;
				a = 1;
				print_array(array, size);
			}
		}
	}
}

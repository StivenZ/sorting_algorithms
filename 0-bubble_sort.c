#include "sort.h"
/**
 * bubble_sort - sorting algorithm
 * @array: array of integers
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, tmp = 0;

	if (size < 2)
		return;

	while (array[i] && i < size)
	{
		if (array[i] > array[i + 1] && (array[i + 1]))
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			if (array[i - 1])
				i--;
			print_array(array, size);
		}
		else
			i++;
	}
}

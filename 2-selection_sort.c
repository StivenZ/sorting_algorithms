#include "sort.h"
/**
 * selection_sort - functoin that sorts an array
 * @array: array of ints
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t a = 0, b = 0, temp = 0, imin = 0;
	int vmin;
	int swap = 1;

	if (!array)
		return;
	while (a < size)
	{
		swap = 0;
		vmin = array[a];
		b = a;
		for (; b < size; b++)
		{
			if (array[b] < vmin)
			{
				vmin = array[b];
				imin = b;
				swap = 1;
			}
		}
		if (swap == 1)
		{
			temp = array[a];
			array[a] = array[imin];
			array[imin] = temp;
			print_array(array, size);
		}

		a++;
	}
}

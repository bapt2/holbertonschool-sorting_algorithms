#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, count, tmp;

	for (count = 0; count < size - 1; ++count)
	{
		for (i = 0; i < size - count - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

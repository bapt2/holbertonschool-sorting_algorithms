#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, count;

	if (!array || size < 2)
		return;
	for (count = 0; count < size - 1; ++count)
	{
		for (i = 0; i < size - count - 1; ++i)
		{
			if (array[i + 1] != '\0' && array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

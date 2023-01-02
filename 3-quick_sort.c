#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in ascending order 
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int i, j, pivot, temp, low, high;

	if (low < high)
	{
		pivot = low;
		i = low;
		j = high;

		while (i < j)
		{
			while (array[i] <= array[pivot] && i < high)
				i++;
			while (array[j] > array[pivot])
				j--;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		temp = array[pivot];
		array[pivot] = array[j];
		array[j] = temp;
		print_array(array, size);

		quick_sort_recursion(array, 0, size - 1);
	}
}
/*	if (array == NULL)
		return;
	quick_sort_recursion(array, 0, size - 1);
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}*/

void quick_sort_recursion(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot = partition(array, low, high);

		quick_sort_recursion(array, low, pivot - 1);
		quick_sort_recursion(array, pivot + 1, high);
	}

}


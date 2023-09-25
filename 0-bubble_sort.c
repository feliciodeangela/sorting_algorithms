#include "sort.h"
/**
 * bubble_sort - Entry point.
 * Description: Sort an array of integers in ascending order using bubble sort.
 * @array: Array (Data structure) to sort.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t ii;
	int tx = 1, c;

	while (tx == 1)
	{
		tx = 0;
		for (ii = 0; ii < (size - 1); ii++)
		{
			if (*(array + ii) > *(array + (ii + 1)))
			{
				c = *(array + (ii + 1));
				*(array + (ii + 1)) = *(array + ii);
				*(array + ii) = c;
				tx = 1;
				print_array(array, size);
			}
		}
	}
}

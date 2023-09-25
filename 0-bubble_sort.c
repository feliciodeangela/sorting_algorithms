#include "sort.h"
/**
 * bubble_sort - Entry point.
 * Description: Sort an array of integers in ascending order using bubble sort.
 * @array: Array (Data structure) to sort.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tx = 1, c;

	if (array && size > 2)
	{
		while (tx == 1)
		{
			tx = 0;
			for (i = 0; i < (size - 1); i++)
			{
				if (*(array + i) > *(array + (i + 1)))
				{
					c = *(array + (i + 1));
					*(array + (i + 1)) = *(array + i);
					*(array + i) = c;
					tx = 1;
					print_array(array, size);
				}
			}
		}
	}
}

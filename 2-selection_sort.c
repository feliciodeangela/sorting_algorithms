#include "sort.h"
/**
 * selection_sort - Entry point.
 * Description: Sort an array in ascending order using selection sort algorythm
 * @array: Array to sort.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, mindx, aux;

	for (i = 0; i < (size - 1); i++)
	{
		mindx = i;
		for (j = (i + 1); j < size; j++)
		{
			if (*(array + j) < *(array + mindx))
				mindx = j;
		}
		if (mindx != i)
		{
			aux = *(array + i);
			*(array + i) = *(array + mindx);
			*(array + mindx) = aux;
			print_array(array, size);
		}
	}
}

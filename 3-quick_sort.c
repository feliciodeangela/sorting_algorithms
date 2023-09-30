#include "sort.h"
/**
 * quick_sort - Entry point.
 * Description: Sort array using quick sort algorythm.
 * @array: Array to sort.
 * @size: Number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	int l = 0;
	int r = (int)(size - 1);

	if (size > 1 && array != NULL)
	{
		internalSort(array, l, r, size);
	}
}
/**
 * internalSort - Parcially order both sides of array.
 * @array: Array to divide.
 * @l: Leftmost element of the array.
 * @r: Rightmost element of the array.
 * @size: Number of elements in the array.
 */
void internalSort(int *array, int l, int r, size_t size)
{
	int piv;

	if (l < r)
	{
		piv = part(array, l, r, size);
		internalSort(array, l, (piv - 1), size);
		internalSort(array, (piv + 1), r, size);
	}
}
/**
 * part - Entry point.
 * Description: Divide the array according to parameters.
 * @array: Array to divide.
 * @l: Leftmost element of the array.
 * @r: Rightmost element of the array.
 * @size: Number of elements in the array.
 * Return: The pivot of the array.
 */
int part(int *array, int l, int r, size_t size)
{
	int j, c, piv = *(array + r), i = l;

	for (j = l; j < r; j++)
	{
		if (*(array + j) < piv)
		{
			if (i != j)
			{
				c = *(array + i);
				*(array + i) = *(array + j);
				*(array + j) = c;
				print_array(array, size);
			}
			i++;
		}
	}
	if (*(array + i) != *(array + r))
	{
		c = *(array + i);
		*(array + i) = *(array + r);
		*(array + r) = c;
		print_array(array, size);
	}
	return (i);
}

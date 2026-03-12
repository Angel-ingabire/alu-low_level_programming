#include "function_pointers.h"

/**
 * int_index - searches for an integer using a comparison function
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer used to compare values
 *
 * Return: index of first element where cmp != 0, -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

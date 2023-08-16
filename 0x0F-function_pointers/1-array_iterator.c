#include "function_pointers.h"

/**
  * array_iterator - point to an arr
  * @array: arr typ int
  * @size: arg tpy int
  * @action: arg typ int
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

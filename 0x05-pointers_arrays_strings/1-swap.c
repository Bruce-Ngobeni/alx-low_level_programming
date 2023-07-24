/**
 * swap_int - a function that swaps the values of two integers.
 * @a: input argument, which is a pointer that can hold integer address.
 * @b: second input argument, a poniter that can hold integer address.
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

#include "main.h"
/**
 *reset_to_98 - a function that updates a value of a variable
 *using a pointer.
 *
 *@n: an argument which is a pointer that can hold an address of an integer.
 */

void reset_to_98(int *n)
{
	int *i;

	i = n;
	*i = 98;
}

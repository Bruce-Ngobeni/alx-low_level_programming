#include "main.h"
/**
 *_isdigit - a function that checks for a digit
 *@c: is an input parameter
 *Return: 1 if is a digit, 0 if is not a digit.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}

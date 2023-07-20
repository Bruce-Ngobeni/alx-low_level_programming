#include "main.h"
/**
 *_isupper - a program that checks for uppercase character.
 *@c: input parameter.
 *Return: 1 or 0 (Success).
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

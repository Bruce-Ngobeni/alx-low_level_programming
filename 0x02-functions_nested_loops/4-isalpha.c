#include "main.h"
/**
 *_isalpha - a program that checks for alphabetic characters
 *Return: 0.
 *@c: input parameter that represents input from a user
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

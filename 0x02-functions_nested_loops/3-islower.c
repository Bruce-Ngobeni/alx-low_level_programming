#include "main.h"
/**
 *_islower - a program that checks for lowercase character.
 *Return: 1 (Success).
 *@c: is a parameter that represents an input form user.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 *_abs - a program that computes the absolute value fo an int.
 *Return: 0.
 *@c: int represent an interger input from user.
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}

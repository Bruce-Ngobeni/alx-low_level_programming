#include "main.h"
/**
 * times_table - a function that prints the 9 times table.
 * Return: 0.
 */
void times_table(void)
{
int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
while (num1 <= 9)
{
num2 = 0;
while (num2 <= 9)
{
num3 = num1 * num2;
if (num3 > 9)
{
num4 = num3 % 10;
num5 = (num3 - num4) / 10;
_putchar(',');
_putchar(' ');
_putchar(48 + num5);
_putchar(48 + num4);
}
else
{
if (num2 != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(48 + num3);
}
num2++;
}
num1++;
_putchar('\n');
}
}

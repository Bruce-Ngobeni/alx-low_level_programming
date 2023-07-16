#include <stdio.h>
/**
 *main - A program that prints the size of data types.
 *Return: 0 (Success).
 */
int main(void)
{
int num;
char letter;
long int decimals;
long long int decimal;
float last;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(letter));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(decimals));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(decimal));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(last));

return (0);
}

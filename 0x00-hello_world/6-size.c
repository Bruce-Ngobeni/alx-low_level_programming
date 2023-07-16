#include <stdio.h>
/**
 *main - A program that prints the size of data types.
 *Return: 0 (Success).
 */
int main(void)
{
int num;
char letter;
long int decimal;
long long int deci;
float last;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(letter));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(decimal));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(deci));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(last));

return (0);
}

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

printf("Size of a char: %zu byte(s)",sizeof(letter));
printf("Size of a int: %zu byte(s)",sizeof(num));
printf("Size of a long int: %zu byte(s)",sizeof(decimals));
printf("Size of a long long int: %zu byte(s)",sizeof(decimal));
printf("Size of a float: %zu byte(s)",sizeof(last));

return (0);
}

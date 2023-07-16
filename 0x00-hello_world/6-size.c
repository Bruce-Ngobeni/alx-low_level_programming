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

printf("Size of a char: %zu byte(s)",(unsigned long)sizeof(letter));
printf("Size of a int: %zu byte(s)",(unsigned long)sizeof(num));
printf("Size of a long int: %zu byte(s)",(unsigned long)sizeof(decimals));
printf("Size of a long long int: %zu byte(s)",(unsigned long)sizeof(decimal));
printf("Size of a float: %zu byte(s)",(unsigned long)sizeof(last));

return (0);
}

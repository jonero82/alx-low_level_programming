#include "main.h"                                         

/**
 * print_numbers - prints the numbers for 1 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + '0');
++;
}
_putchar('\n');
}

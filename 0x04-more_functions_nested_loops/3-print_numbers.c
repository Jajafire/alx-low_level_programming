#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * followed by a newline
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}

_putchar('\n');
}

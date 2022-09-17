#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * followed by a newline
 * you can only use putchar twice
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (1 < 10)
	{
		_putchar('0' + i);
		i++;
	}

	_putchar('\n');
}

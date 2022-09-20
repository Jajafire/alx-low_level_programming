#include "main.h"

/**
 * puts_half - prints the half of a string
 * followed by a newline
 * @str: string to be printed
 */

void puts_half(char *str)
{
	unsigned long int start, len, i;

	len = strlen(str);
	start = len / 2;

	if (len % 2)
		start += 1;

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}

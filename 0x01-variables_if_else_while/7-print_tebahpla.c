#include <stdio.h>
/**
 * main - program that prints the lowercase of letters n the reverse
 * Only the putchar function can be used
 * Return: 
 */

int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}

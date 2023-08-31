#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int c;

	for (i = 63; i > 0; i--)
	{
		c = n >> i;
		if (c & 1)
		{
			_putchar('1');
			c++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}

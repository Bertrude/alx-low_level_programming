#include "main.h"
#include <stdio.h>
/**
 * print_number -print number putchar
 * @n:integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	putchar(x % 10 + '0');
}

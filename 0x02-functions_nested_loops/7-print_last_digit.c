#include "main.h"

/**
 * print_last_digit - print the last digit
 * @c: the number
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int d;

	d = c % 10;
	if (d < 0)
	{
		d = d * (-1);
	}
	_putchar(d + '0');
	return (d);
}

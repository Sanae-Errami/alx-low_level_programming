#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @c: is the integer
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		int abs;

		abs = c * (-1);
		return (abs);
	}
}


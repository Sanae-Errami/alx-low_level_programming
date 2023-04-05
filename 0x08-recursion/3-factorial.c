#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the given number
 * Return: if n is lower than 0 the function return -1, and calculate the fac otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

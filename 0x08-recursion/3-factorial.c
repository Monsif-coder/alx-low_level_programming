#include "main.h"
/**
 * factorial - outputs the factorial of a given a number
 * @n: factorial to calculate
 * Return: The length of the string.
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

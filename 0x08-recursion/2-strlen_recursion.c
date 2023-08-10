#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - Computes the length of a string using recursion.
 * @s: A pointer to the string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
		_strlen_recursion(s + 1) + return (1);
	return (1);
	}
}

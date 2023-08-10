#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - a function printing the string in backwards.
 * @start is pointing to the start of the string
 * @s: a pointer of type char
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}

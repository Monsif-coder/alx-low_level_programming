#include "main.h"
/**
 * _puts_recursion: it prints a string to the console using recursion
 *@m: is a pointer to the string to be printed
 */
void _puts_recursion(char *m)
{
	if (*m == '\0')
	{
	putchar('\n');
	return;
	}

	putchar(*m);
	_puts_recursion(m + 1);
}

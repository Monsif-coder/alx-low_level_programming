#include "main.h"
/**
 *_puts_recursion: printing a string to the consoe with recursion
 * @m: the desired value
 * Return: success
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

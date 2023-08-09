#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion: it prints a string to the console pointed to by m
 * @m: is a pointer.
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

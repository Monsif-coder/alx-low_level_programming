#include "main.h"
/**
 * _puts - prints a string to the standard output.
 *
 * @str: pointing to the string.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i++;
	}

	putchar('\n');
}

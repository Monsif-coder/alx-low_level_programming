#include "main.h"
/**
 * print_rev - prints a string in reverce
 * followed by a new line
 * @length:loop index
 * @str: pointer to string
 */

void print_rev(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
		length--;

	while (length >= 0)
	{
	putchar(str[length]);
	length--;
	}

	putchar('\n');
}

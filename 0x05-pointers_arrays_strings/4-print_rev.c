#include "main.h"
/**
 * print_rev - prints a string in reverce
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

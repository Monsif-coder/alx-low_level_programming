#include<stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - displays the lowercase alphabet 10 times,
* each time followed by a new line
*/
void print_alphabet_x10(void)
{
	int box;

	for (box = 1; box <= 10; box++)
	{
	int x = 'a';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	}
}

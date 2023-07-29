#include<stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabet characters in lower case
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)

{
	int x = 'a';

	while (x <= 'z')
{
	putchar(x);
	x++;
}
	putchar('\n');
}

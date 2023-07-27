#include<stdio.h>
#include "main.h"
/**
* main - Entry point
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

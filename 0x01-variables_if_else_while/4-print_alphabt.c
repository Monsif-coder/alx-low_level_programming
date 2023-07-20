#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	char mor = 'a';

	while (mor <= 'z') 
{
	if (mor != 'e' && mor != 'q') 
{
	putchar(mor);
}
        mor++;
}

    putchar('\n');
    return 0;
}

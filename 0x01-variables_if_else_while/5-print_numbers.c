#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
   int ram = 0;
    while (ram < 10 )
    {
      putchar (ram + '0');
    
    ram++;
    }
    putchar('\n');
    return (0);
}

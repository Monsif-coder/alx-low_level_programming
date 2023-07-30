#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @y: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
    int y = x % 10;
    
    
    if (x < 0)
	{
		x = -x;
	}
    else if (y < 0)
    
	    y = -y;
	_putchar('0'+y);

    
	return(y);
}

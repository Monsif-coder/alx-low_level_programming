#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
    int y;

    if (x < 0)
    {
        x = -x;
        y = x % 10;
    }
    else
    {
        y = x % 10;
    }

    _putchar('0' + y);

    return y;
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int messi;

    for (messi = 48; messi < 58; messi++)
    {
        putchar(messi);
        if (messi < 57)
        {
            putchar(44);
            putchar(32);
        }
    }
    putchar('\n');
    return (0);
}

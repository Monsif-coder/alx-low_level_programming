#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void) {
    int box;
    for (box = 0; box <= 10; box++)
    {
        int x ='a';
        while (x <= 'z')
        {
        putchar(x);
        x++;
        }
        putchar('\n');
    }
}

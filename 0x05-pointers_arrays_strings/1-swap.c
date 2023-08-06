#include "main.h"
/**
 * swap_int  - swapes variables' value
 *
 * @x: its value gets swaped.
 * @y: its value gets swaped as well.
 */
void swap_int(int *x, int *y)
{
	int v = *x;
	*x = *y;
	*y = v;

}

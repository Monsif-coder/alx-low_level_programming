#include "main.h"
/**
 * rev_string  - prints a string in reverce
 *
 *@s: pointer of type char
 *@*start:starting pointer
 *@*end: ending pointer
 *temp: temporary variable
 *
 */

void rev_string(char *s)
{
	int x = 0;
	char *start;
	char *end;
	char temp;

	while (s[x] != '\0')
	{
	x++;
	}

	x--;

	start = s;
	end = s + x;

	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
	}
}

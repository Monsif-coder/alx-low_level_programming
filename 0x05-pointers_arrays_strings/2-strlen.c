#include "main.h"
/**
 * _strlen - outputs length of a string
 * @s:pointer of type char.
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s != '\0')
	{
		s++;
		y++;
	}
	return (y);
}

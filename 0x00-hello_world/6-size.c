#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	printf("the size of a char: %zu byte(s) \n", sizeof(char));
	printf("the size of a int: %d byte(s) \n", sizeof(int));
	printf("the size of a long int: %ld byte(s) \n", sizeof(long int));
	printf("the size of a long long int: %zi byte(s) \n", sizeof(long long int));
	printf("the size of a float: %zu byte(s) \n", sizeof(float));
	return (0);
}

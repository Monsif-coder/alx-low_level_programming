#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;
	if (lastdigit > 5)
	{
	printf(" is %d and is greater than 5", lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("is %d is 0 \n", lastdigit);
		}
	else if (lastdigit < 6)
	{
		printf("is %d and is less than 6 and not 0 \n", lastdigit);
	}
	return (0);
}

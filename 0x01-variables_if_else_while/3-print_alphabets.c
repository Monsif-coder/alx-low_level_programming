#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	
	for (int mbs = 'a';  mbs <= 'z'; mbs++)
{
		putchar(mbs);

}
	
	for  (int mns = 'A'; mns <= 'Z'; mns++)
{
	putchar(mns);


}
	putchar('\n');
	return (0);
}

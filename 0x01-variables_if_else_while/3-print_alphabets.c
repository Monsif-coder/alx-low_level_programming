#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int mbs = 'a';
	for (int mbs = 'a';  mbs <= 'z'; mbs++)
{
		putchar(mbs);

}
	int mns = 'A';
	for  (mns = 'A'; mns <= 'Z'; mns++)
{
	putchar(mns);


}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digits of a number'
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int is;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	is = n % 10;
	{
	if (is > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (is == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 and not 0\n", n, ld);
	}
	return (0);
}

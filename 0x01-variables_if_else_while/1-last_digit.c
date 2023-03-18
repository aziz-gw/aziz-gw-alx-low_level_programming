#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - executes conditional statements
 * Return: return zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n%10 > 5)
	{
		prinf("%d Last digit of %d and is greater than 5\n", n);
	}
	else if (n%10 == 0)
	{
		print("%d Last digit of %d and is 0\n", n);
	}
	else if(n%10 < 6 && n%10 > 6)
	{
		printf("%d Last digit of %d and is less than 6 and 0\n", n)
	return (0);
}

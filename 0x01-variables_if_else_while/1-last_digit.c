#include <stdlib.h>
#include <time.h>

/**
 * main - conditional execution
 * Return: Random number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	return (0);
}

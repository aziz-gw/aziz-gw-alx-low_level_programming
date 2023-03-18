#include <stdlib.h>
#include <time.h>

/**
 * main - conditional execution
 * Return - different n values
 * /
int main(void)
{
        int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (rand() > 0) 
	{
		printf(n, "is positive %d\n");
	}
	else if (rand() == 0) 
	{
		printf(n, "is zero %d\n");
	}
	else if (rand() < 0)
	{
		printf(n, "is positive %d\n");
	return (0);
}

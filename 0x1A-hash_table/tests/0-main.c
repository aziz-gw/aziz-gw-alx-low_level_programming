#include "../hash_tables.h"

/**
 * main - tests hash_table_create function
 *
 * Return: always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}

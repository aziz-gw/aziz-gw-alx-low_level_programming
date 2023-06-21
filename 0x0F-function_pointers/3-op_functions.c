#include "3-calc.h"

/**
 * op_add - sums 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - divides 2 numbers and returns the remainder
 * @a: first number
 * @b: second number
 *
 * Return: result of the division of a and b
 */

int op_mod(int a, int b)
{
	int result = a % b;

	return (result);
}

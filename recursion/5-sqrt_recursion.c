#include "main.h"

/**
 * _sqrt_helper - helper function to find sqrt recursively
 * @n: number to find sqrt
 * @i: iterator
 *
 * Return: sqrt(n) if perfect square, -1 otherwise
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of n
 * @n: number to find sqrt
 *
 * Return: sqrt(n) if perfect square, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}


#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be computed
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if ( n < 0)
	{
		int abs;

		abs = n * -1;

		return (abs);
	}

	return (n);
}

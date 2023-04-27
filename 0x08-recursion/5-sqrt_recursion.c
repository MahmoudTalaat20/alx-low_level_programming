#include "main.h"

int getSquare(int n, int value);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: is the number
 * Return: The natural square root of a number
*/

int _sqrt_recursion(int n)
{
	return (getSquare(n, 1));
}

/**
 * getSquare - Function helps me to find the root of a number
 * @n: is the number
 * @value: is the second paramater
 * Return: the root of a number
*/

int getSquare(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (getSquare(n, value + 1));
	else
		return (-1);
}

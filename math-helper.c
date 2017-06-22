#include "holberton.h"

/**
 * itoa - convert integer to string
 * @n: integer
 * @s: char array
 *
 * Return: returns int for position of format
 */
int itoa(int n, char s[])
{
	int i = 0;

	if (n / 10 != 0)
		i = itoa(n / 10, s);
	else if (n < 0)
		s[i++] = '-';

	s[i++] = _abs(n % 10) + '0';
	s[i] = '\0';

	return (i);
}

/**
 * _abs - return absolute value of int
 * @n: integer to be changed to absolute value
 * Return: abs(n)
 **/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

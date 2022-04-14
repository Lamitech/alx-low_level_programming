#include "main.h"
/**
 * _isdigit - returns 1 for digit
 * @c: function parameter
 * Return: returns 0 / 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

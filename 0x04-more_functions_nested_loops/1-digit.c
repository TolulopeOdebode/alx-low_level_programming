#include "main.h"
/**
 * _isdigit - Checks digit
 * @c: parameter used
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

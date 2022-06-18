#include "main.h"
/**
 * _islower - main function
 * @c: shows the character to compare
 * Return: 0 if false and 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

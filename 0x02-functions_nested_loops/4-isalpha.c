#include "main.h"
/**
 * _isalpha - main funtion
 * @c: Character to be compared
 * Return: 0 if false and 1 if true
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

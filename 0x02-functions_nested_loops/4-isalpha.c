#include "main.h"
/**
 * _isalpha - main funtion
 * @c: Character to be compared
 * Return: 0 if false and 1 if true
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

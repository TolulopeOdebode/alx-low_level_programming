#include "main.h"
/**
 * main - This code will check for specific char
 * and print out main character by char
 * Description: uses the main header file that
 * contains the function _putchar
 * Return: Always 0 when successful
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}

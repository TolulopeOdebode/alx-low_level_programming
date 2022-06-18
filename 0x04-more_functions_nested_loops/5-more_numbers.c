#include "main.h"
/**
 * more_numbers - prints more number
 * Return: anything
 */
void more_numbers(void)
{
	int i;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');

		i++;
	}
}

#include "main.h"
/**
 * print_triangle - create triangle
 * @size: Is param
 * Return: anything
 */
void print_triangle(int size)
{
	int i = 0;
	int j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

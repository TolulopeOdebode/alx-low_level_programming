#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints out 1 to 98
 * @n: Is the character to compare
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}

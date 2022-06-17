#include <stdio.h>
/**
 * main - Printing Combo
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n, o;

	for (n = 0; n < 100; n++)
	{
		for (o = 0; 0 < 100; o++)
		{
			if (n < o)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((o / 10) + 48);
				putchar((o % 10) + 48);
				if (n != 98 || o != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

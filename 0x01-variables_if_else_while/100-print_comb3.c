#include <stdio.h>
/**
 * main - Printing different possible combinations
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 58; i++)
		{
			if (n != i && n < i)
			{
				putchar(n);
				putchar(i);
				if (i == 57 && i == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Printing numbers using putchar
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

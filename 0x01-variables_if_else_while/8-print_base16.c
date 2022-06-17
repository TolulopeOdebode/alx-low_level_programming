#include <stdio.h>
/**
 * main - Printing Hexadecimal numbers
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;
	char i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

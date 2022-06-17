#include <stdio.h>
/**
 * main - Reverse of lowercase alphabets
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

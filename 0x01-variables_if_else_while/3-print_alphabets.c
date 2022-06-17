#include <stdio.h>
/**
 * main - Printing All Alphabets in Upper_case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char l;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}


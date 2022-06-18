#include <unistd.h>
/**
 * _putchar -writes to the stdout (standard output)
 * @c: The character to print
 *
 * Return: 1 ( when Successful)
 * On error, -1 will be returned, and error will be set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
/**
 * print_line - prints a line with n length
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
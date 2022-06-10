#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The parameter to be checked
 * Return:
 * 1 and prints + positive
 * 0 and prints 0 zero
 * -1 and prints - negative
 */

int print_sign(int n)
{
	if (n <= 0)
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

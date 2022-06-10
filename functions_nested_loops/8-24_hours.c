#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print a digital watch
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		_putchar(':');
		_putchar('0' + (j / 10));
		_putchar('0' + (j % 10));
		_putchar('\n');
		}
	}
}

#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print 0 to 9  numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}

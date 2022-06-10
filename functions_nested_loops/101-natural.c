#include <stdio.h>
#include "main.h"
/**
 * main - just prints sum fot multiples of 3 or 5
 * that are lower than 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

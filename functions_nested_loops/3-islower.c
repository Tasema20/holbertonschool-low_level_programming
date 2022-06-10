#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The parameter to be checked
 * Return: 1 lowercase, 0 othercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

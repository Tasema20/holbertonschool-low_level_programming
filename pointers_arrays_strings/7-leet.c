#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *a)
{
	int i = 0, j;
	char lo[] = {'a', 'e', 'o', 't', 'l'};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char le[] = {'4', '3', '0', '7', '1'};

	while (a[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == lo[j] || a[i] == up[j])
			a[i] = le[j];
		}
		i++;
	}
	return (a);
}

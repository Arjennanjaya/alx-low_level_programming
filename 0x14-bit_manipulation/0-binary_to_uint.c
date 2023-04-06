#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: string containing binary number
 * Return: returns unsigned int result.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int x = 0;

	if (b == NULL)
		return (0);
	while (b[x] == '1' || b[x] == '0')
	{
		val <<= 1;
		val += b[x] - '0';
		x++;
	}
	return (val);
}

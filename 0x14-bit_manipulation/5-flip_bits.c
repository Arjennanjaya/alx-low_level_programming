#include <stdio.h>
#include "main.h"

/**
 * flip_bits - this function returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first operand
 * @m: second operand
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = n ^ m;
	unsigned int count = 0;

	while (k)
	{
		count += k & 1;
		k >>= 1;
	}
	return (count);
}

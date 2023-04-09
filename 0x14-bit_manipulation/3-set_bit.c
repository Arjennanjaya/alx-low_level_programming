#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to the operand to be changed
 * @index: the index of bit to set to 1
 * Return: return 1 if successful, otherwise return -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1 << index;

	return ((*n & ~x) | (1 << index));
}

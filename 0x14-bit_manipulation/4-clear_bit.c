#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the variable to be changed
 * @index: the index of a bit to be cleared
 * Return: returns 1 if successful, otherwise return -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

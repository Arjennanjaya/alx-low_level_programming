#include "main.h"
/*
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

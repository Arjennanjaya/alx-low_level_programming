#include "main.h"
/**
 * positive_or_negative - prints positive or negative
 * @i: parameter to be tested
 * Return: Void
 */


void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

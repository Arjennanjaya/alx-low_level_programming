#include "main.h"
/**
 * puts2 - function should only print one character out of two
 * starting with the first one
 * @str: input
 * Return: vpid
 */

void puts2(char *str)
{
	int longi = 0;
	int j = 0;
	char *k = str;
	int l;

	while (*k != '\0')
	{
		k++;
		longi++;
	}
	j = longi - 1;
	for (l = 0; l <= j; l++)
	{
		if (l % 2 == 0)
		{
		_putchar(str[l]);
		}
	}
	_putchar('\n');
}

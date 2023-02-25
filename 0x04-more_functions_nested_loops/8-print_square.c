#include "main.h"
/**
 * print_square - prints n squares according to n number of lines
 * @size: the number of squares/ number of times
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

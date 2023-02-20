#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	single_digit;
	double_digit;

	for (i = 0; i < 100; i++)
	{
	single_digit = i % 10;
	double_digit = i / 10;
	
	if (double_digit < single_digit)
	{
	putchar(double_digit + '0');
	putchar(single_digit + '0');

	if (i < 89)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int single_digit;
	int double_digit;
	int triple_digit;

	for (i = 0; i < 1000; i++)
	{
	single_digit = i / 100;
	double_digit = (i / 10) % 10;
	triple_digit = (i % 10);

	if (single_digit < double_digit && double_digit < triple_digit)
	{
	putchar(single_digit + '0');
	putchar(double_digit + '0');
	putchar(triple_digit + '0');

	if (i < 800)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	putchar('\n');
	return (0);
}

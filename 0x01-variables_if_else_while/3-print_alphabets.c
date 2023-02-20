#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print alphabets in lowercase then uppercase
 * Return: Always 0 (Success)
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
	putchar(low);
	}

	for (low = 'A'; low <= 'Z'; low++)
	{
	putchar(low);
	}
	putchar('\n');

	return (0);
}

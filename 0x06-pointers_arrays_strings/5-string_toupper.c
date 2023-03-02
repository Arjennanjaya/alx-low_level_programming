#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @n: pointer
 * Return: always 0
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (0);
}

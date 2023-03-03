#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: input value
 * Return: value of s
 */

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefjhijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[i])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

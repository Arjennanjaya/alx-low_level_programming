#include "main.h"
/**
 * _isalpha - function that prints lower and uppercase alphabets
 * @c: parameter to be printed
 * Return: return 1 if lower or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

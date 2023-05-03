#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer string length
 *
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}

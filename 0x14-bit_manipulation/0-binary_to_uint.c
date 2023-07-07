#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: pointer to a string
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		num = 2 * num + (b[index] - '0');
	}

	return (num);
}

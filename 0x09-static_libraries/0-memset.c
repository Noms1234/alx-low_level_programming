#include "main.h"

/**
 * _memset - function fills the first number bytes of the memory
 * @s: memory area alocation
 * @b: constant byte
 * @n: number of bytes
 *
 * Returns: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

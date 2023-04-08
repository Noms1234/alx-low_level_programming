#include "main.h"

/**
 * _memcpy - function copies bytes from memory area to memory area
 *
 * @n: copies bytes
 * @src: memory area
 * @dest: to memory area
 *
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

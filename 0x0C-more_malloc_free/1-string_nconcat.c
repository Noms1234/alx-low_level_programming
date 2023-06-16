#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: bytes
 * Return:  pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[i] != '\0'; j++)
		;

	if (n > j)
		n = j;
	k = i + n;

	pntr = malloc(k + 1);

	if (pntr == NULL)
		return (NULL);

	for (z = 0; z < k ; z++)
		if (z < i)
			pntr[z] = s1[z];
	else
		pntr[z] = s2[z - i];
		pntr[z] = '\0';

	return (pntr);
}

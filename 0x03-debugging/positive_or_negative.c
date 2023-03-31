#include "main.h"

/**
 * positive_or_negative - checks positive or nagative number
 * @i: the number is checked
 * Return: always 0
 **/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d us negative", i);
	else
		printf("%d is positive", i);
}

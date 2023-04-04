/**
 * _strchr -  function that locates a character in a string
 *
 * @s: the string
 * @c: first occurrence of the character
 *
 * Return: pointer to the first occurrence of
 * the character in the string
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}

	return ('\0');
}

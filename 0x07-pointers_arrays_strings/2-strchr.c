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
	int character;

	for (character = 0; s[character] >= '\0'; character++)
	{
		if (s[character] == c)
			return (s + character);
	}

	return ('\0');
}

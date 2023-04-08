/**
 * _strpbrk - unction that searches a string for any of a set of bytes
 * @s: locates the first occurrence in the string
 * @accept: bytes in the string
 * Return: a pointer to the byte in that matches bytes
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

		while (*s)
		{
			for (index = 0; accept[index]; index++)
			{
				if (*s == accept[index])
					return (s);
			}
	s++;
}
return ('\0');
}

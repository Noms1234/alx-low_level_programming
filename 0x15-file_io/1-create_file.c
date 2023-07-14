#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
**/

int create_file(const char *filename, char *text_content)
{
	int res = 1, cnt = 0, f;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[cnt])
			cnt++;
		res = write(f, text_content, cnt);
	}
	if (res == -1)

	return (-1);
	close(f);
	return (1);
}

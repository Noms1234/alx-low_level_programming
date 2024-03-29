#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer name
 * @text_content: string to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _write, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	_open = open(filename, O_WRONLY | O_APPEND);
	_write = write(_open, text_content, len);

	if (_open == -1 || _write == -1)
		return (-1);

	close(_open);

	return (1);
}

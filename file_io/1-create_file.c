#include "main.h"
/**
 * create_file - create file
 *
 * @filename: filename
 *
 * @text_content: aaaaa
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		write(f, text_content, strlen(text_content));
	close(f);
	return (1);
}

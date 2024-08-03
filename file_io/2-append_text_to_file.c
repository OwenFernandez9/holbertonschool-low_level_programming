#include "main.h"
/**
 * append_text_to_file - aaaa
 *
 * @filename: filename
 * @text_content: aaa
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;

	f = open(filename, O_APPEND);
	if (f == -1)
	{
		return(-1);
	}
	if (text_content != NULL)
		write(f, text_content, strlen(text_content));
	close(f);
	return (1);
}

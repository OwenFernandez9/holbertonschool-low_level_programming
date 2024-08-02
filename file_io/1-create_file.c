#include "main.h"
/**
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	f = open(filename, O_WRONLY | O_CREAT, 0600);
	if (f == -1)
	{
		return (-1);
	}
	write(f, text_content,strlen(text_content));
	close(f);
	return (1);
}

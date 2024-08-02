#include "main.h"
/**
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = 0, count = 0;
	char *buff;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}
	count = read(f, buff, letters);
	count = write(STDOUT_FILENO, buff, count);
	close(f);
	free(buff);
	return (count);
}

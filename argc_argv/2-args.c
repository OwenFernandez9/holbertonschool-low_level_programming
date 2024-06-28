#include <stdio.h>
/**
 * main - aaa
 *
 * @argc: argc
 * @argv: argv
 * Return: retorno
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

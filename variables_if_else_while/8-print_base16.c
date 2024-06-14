#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	printf("\n");

	return (0);
}

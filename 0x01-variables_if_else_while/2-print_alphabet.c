#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	int i;

	ch = 'a';

	for (i = 0; i < 26; i++)
	{
		putchar(ch);
		ch += 1;
	}
	putchar('\n');

	return (0);
}

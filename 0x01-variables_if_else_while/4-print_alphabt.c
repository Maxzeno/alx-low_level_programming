#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	int i;

	ch = 'a';

	for (i = 0; i < 26; i++)
	{
		if (ch == 'q' || ch == 'e')
		{
			ch += 1;
			continue;
		}
		putchar(ch);
		ch += 1;
	}
	putchar('\n');

	return (0);
}

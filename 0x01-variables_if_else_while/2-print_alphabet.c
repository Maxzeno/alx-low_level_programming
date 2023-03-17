#include <stdio.h>

int main()
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

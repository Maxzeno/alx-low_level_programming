#include <stdio.h>

/**
 * main - Entry point
 * Description: print numbers 0 to 9 and add ', ' after each number except last
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

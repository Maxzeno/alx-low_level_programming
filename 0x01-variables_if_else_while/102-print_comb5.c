#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1, n2, m1, m2;
	m1, m2 = 0;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if (n2 == 9)
			{
				m1++;
				m2 = 0;
			}
			else
			{
				m2++;
			}

			while (m1 < 10)
			{
				while (m2 < 10)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(' ');
					putchar(m1 + '0');
					putchar(m2 + '0');

					if (n1 != 9 || n2 != 8 || m1 != 9 || m2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
					m2++;
				}
				m1++;
			}
		}
	}
	putchar('\n');
	return (0);
}

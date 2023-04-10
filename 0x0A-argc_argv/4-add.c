#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints added args if positive numbers
 *@argc: length of argv.
 *@argv: pointer to string.
 *
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, num, sum;

	for(i=1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum = sum + num;
		}
		else if (num == 0)
		{
			print('Error');
			return (1)
		}
	}
	

	printf("%d\n", sum);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints multiple two numbers
 *@argc: length of argv.
 *@argv: pointer to string.
 *
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}

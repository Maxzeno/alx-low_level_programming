#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints all args
 *@argc: length of argv.
 *@argv: pointer to string.
 *
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

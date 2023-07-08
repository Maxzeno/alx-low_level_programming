#include "main.h"

/**
 * get_endianness - endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int index;
	char *character;

	index = 1;
	character = (char *)&index;

	return (*character);
}

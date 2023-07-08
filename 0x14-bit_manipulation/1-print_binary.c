#include "main.h"

/**
 * print_binary - Converts a number to the binary representation.
 * @n: The number to be converted in binary.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);

    _putchar((n & 1) + '0');
}

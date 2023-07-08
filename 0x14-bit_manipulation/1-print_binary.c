#include "main.h"

/**
 * print_binary - returns the binary of a number
 * @n: number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
    unsigned long int track, result, base, power;
    unsigned int i;
    char remain;

    remain = 0;
    base = 2;
    power = sizeof(unsigned long int) * 8 - 1;
    track = 1;

    for (i = 1; i <= power; i++)
        track *= base;


    while (track != 0)
    {
        result = n & track;
        if (result == track)
        {
            remain = 1;
            _putchar('1');

        }
        else if (remain == 1 || track == 1)
        {
            _putchar('0');
        }
        track >>= 1;
    }
}

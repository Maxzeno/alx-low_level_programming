#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @power: power of the exponet
 * Return: value of base and power
 */
unsigned long int _powerFunc(unsigned int base, unsigned int power)
{
    unsigned long int number;
    unsigned int i;

    number = 1;
    for (i = 1; i <= power; i++)
        number *= base;
    return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
    unsigned long int track, result;
    char flag;

    flag = 0;
    track = _power(2, sizeof(unsigned long int) * 8 - 1);

    while (track != 0)
    {
        result = n & track;
        if (result == track)
        {
            flag = 1;
            _putchar('1');

        }
        else if (flag == 1 || track == 1)
        {
            _putchar('0');
        }
        track >>= 1;
    }
}
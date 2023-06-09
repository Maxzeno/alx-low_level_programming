/**
 * is_prime_number_wrapper - prime number function
 * @i : input number
 * @n : input number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number_wrapper(int i, int n)
{
	int half;

	if (n < 0)
	{
		return (0);
	}

	half = (n / 2);

	if (n == 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

	if (i >= half)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_wrapper(i + 1, n));
	}
}


/**
 * is_prime_number - prime number function
 * @n : input number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	return (is_prime_number_wrapper(2, n));
}

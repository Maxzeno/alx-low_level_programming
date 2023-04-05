/**
 * is_prime_number - prime number function
 * @n : input number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	int i, half;
	half = (n / 2) + 1;

	for (i = 2; i <= half; i++)
	{
		if (n % i == 0)
		{
			return (1);
		}
	}
	return (0);

}
#include <stdio.h>
#include <math.h>

/**
  * main - print the largest prime factor of 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{	long a, nomax;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			nomax = number / a;
		}
	}

	printf("%ld\n", nomax);

	return (0);
}


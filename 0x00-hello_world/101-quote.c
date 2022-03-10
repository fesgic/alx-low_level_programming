#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int arrSize;
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	arrSize = sizeof(msg) / sizeof(msg[1]);
	write(1, msg, arrSize);
	write(1, "", 0);
	return (0);
}

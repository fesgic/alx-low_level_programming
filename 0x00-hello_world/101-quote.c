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
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	arrSize = sizeof(msg) / sizeof(msg[1]);
	write(2, msg, arrSize);
	return (1);
}

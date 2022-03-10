#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int i, arrSize;
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	arrSize = sizeof(msg) / sizeof(msg[1]);
	write(1, msg, arrSize);
}

#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ba;

	for (ba = 48; ba < 58; ba++)
	{
		putchar(ba);
	}
	for (ba = 97; ba < 103; ba++)
	{
		putchar(ba);
	}
	putchar('\n');
	return (0);
}

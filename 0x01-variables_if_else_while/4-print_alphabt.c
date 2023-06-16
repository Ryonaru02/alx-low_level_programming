#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

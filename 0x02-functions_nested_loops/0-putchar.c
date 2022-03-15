#include "_putchar.h"

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_pcr[7] = "_putchar";

	while (n < 7)
	{
		_putchar(str_pcr[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}

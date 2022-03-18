#include <stdio.h>
/**
 * main - Combination of numbers using putchar
 *
 * Return: 0 Success
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

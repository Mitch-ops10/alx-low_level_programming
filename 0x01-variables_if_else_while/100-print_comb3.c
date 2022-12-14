#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 * combination of two digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

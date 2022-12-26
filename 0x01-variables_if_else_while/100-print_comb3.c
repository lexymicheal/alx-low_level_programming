#include <stdio.h>

/**
 * main - print combination of two digit
 * Return: Always 0
 */
int main(void)
{
	int b;
	int a;

	for (b = 0; b <= 9; b++)
	{
		for (a = b + 1; a <= 9; a++)
		{
			putchar(b + '0');
			putchar(a + '0');
			if (b < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

#include<stdio.h>

/**
 * main - Prints all combination of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);

		if (p != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

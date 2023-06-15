#include<stdio.h>
#include<unistd.h>

/**
 * main - This is my starting point
 *
 * Return: This program of mine returns 1 to mean a success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

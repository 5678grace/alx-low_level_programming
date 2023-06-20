#include <unistd.h>

/**
 * main - create _putchar.c
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return(write(1 , &c, 1));
}

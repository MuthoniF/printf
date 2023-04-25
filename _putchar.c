#include "main.h"

/**
 * _putchar - write to the stdout
 * @c: character to write
 *
 * Return: 1 one success
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

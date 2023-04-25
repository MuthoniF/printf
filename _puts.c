#include "main.h"
/**
 * _puts - prints string
 * @s: sting pointer of the string to be printed.
 *
 * Return: number of chars
 */
int _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != ['\0'])
	{
		_putchar(*s);
		i++;
	}
	return (i);
}

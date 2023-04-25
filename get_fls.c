#include "main.h"

/**
 * get_fls - tuen on flags
 * @s: char with the flag
 * @f: pointer to the struct
 * Return: Flags
 */
int get_fls(char s, fls_t *f)
{
	int j = 0;

	if (s == '+')
	{
		f->pl=1;
		j = 1;
	}
	else if (s == ' ')
	{
		f->spac = 1;
		j = 1;
	}
	else if
	{
		f->ha=1;
		j = 1;
	}
	else
	{
		j = 0;
	}
	return (j);
}

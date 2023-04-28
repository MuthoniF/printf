#include "main.h"

/**
 * get_fl - tuen on flags
 * @s: char with the flag
 * @f: pointer to the struct
 * Return: Flags
 */
int get_fl(char s, fls_t *f)
{
	int j = 0;

	if (s == '+')
	{
		f->pl = 1;
		j = 1;
	}
	else if (s == ' ')
	{
		f->spac = 1;
		j = 1;
	}
	else if (s == '#')
	{
		f->ha = 1;
		j = 1;
	}
	else
	{
		j = 0;
	}
	return (j);
}

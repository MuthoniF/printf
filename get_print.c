#include "main.h"

/**
 * get_print - determines the function to use
 * @s: specifier
 *
 * Return: a pointer to printing function
 */
int (*get_print(char s))(va_list, fls_t *)
{
	pr_ha array[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent}
	};
	int fls = 3;
	int i;

	for (i = 0; i < fls; i++)
	{
		if (array[i].c == s)
			return (array[i].f);
	}
	return (NULL);
}

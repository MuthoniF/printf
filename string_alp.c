#include "main.h"

/**
 * print_string - prints the string
 * @list: arguement va_list
 * @f: the ponter to the flag
 *
 * Return: char num
 */
int print_string(va_list list, fls_t *f)
{
	char *i = va_arg(list, char *);

	(void)f;

	if (!i)
		i = "NULL";
	return (_puts(i));
}

/**
 * print_char - prints a character
 * @list: va_list argument
 * @f: function pointer to the struc flag
 *
 * Return: num chara
 */
int print_char(va_list list, fls_t *f)
{
	(void)f;
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_percent - prints values with %
 * list: va_list arg
 * @f: pointer to the struct flag
 *
 * Return: num characters
 */
int print_percent(va_list list, fls_t *f)
{
	(void)list;
	(void)f;
	return (_putchar('%'));
}

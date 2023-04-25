#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int (*ptr)(va_list, fls_t *);
	const char *i;
	int count;

	va_list list;
	fls_t fls = {0, 0, 0};

	count = 0;
	va_start(list, format);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if ((format[0] == '%' && !format[1]) || !format)
		return (-1);
	
	i = format;
	while (*i)
	{
		if (*i == '%')
		{
			i++;
			if (*i == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_fl(*i, &fls))
			{
				i++;
			}
			*ptr = get_print(*i);
			if (*ptr != NULL)
			{
				count += ptr(list, &fls)
			}
			else
			{
				count += _printf("%%%c", *i);
			}
		}
		else
			count += _putchar(*i);
	}
	_putchar(-1);
	va_end(list);
	return (count);
}

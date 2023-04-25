#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct fls - contians the flag that should be switched on
 * @pl: '+' character
 * @spac: ' ' character
 * @ha: "#" character
 */
typedef struct fls
{
	int pl;
	int spac;
	int ha;
} fls_t;

/**
 * printhandle - struct for selecting the right function
 * @c: specifier
 * @f: function pointer
 */
typedef struct printhandle
{
	char c;
	int (*f)(va_list list, fls_t *f);
} pr_ha;
int _print(const char *format, ...);
int get_fl(char s, fls_t *f);
int (*get_print(char s))(va_list, fls_t *);

/* string and character */
int print_string(va_list list, fls_t *f);
int print_char(va_list list, fls_t *f);
int print_percent(va_list list, fls_t *f);

/* Write func */
int _putchar(char c);
int _puts(char *s);
#endif

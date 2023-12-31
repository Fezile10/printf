#include "main.h"

/**
 * get_function - function specifiers.
 *
 * @conversion: Conversion specifiers.
 * @args: arguments.
 *
 * Return: char count.
 */

int get_function(char conversion, va_list args)
{
	int i = 0;
	int count = 0;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_digit},
		{'i', print_digit},
		{'r', print_rev_string},
		{0, NULL}
	};

	while (spec[i].specifiers)
	{
		if (conversion == spec[i].specifiers)
			count += spec[i].f(args);
		i++;
	}

	if (count == 0)
	{
		count += _putchar('%');
		count += _putchar(conversion);
	}

	return (count);
}

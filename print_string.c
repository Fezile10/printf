#include "main.h"

/**
 * print_string - print string.
 * @args: argument.
 * Return: character count.
 */

int print_string(va_list args)
{
	int i;
	int count= 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		count += _putchar(str[i]);

	return (count);
}

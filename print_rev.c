#include "main.h"
/**
 * print_rev_string - Print reverses string.
 * @args: Arguments
 * Return: Lenght of the output
 */
int print_rev_string(va_list args)
{

	int count = 0, i = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		count += _putchar(s[i]);
		i--;
	}
	count--;
	return (count);
}

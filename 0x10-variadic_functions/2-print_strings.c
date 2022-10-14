#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}

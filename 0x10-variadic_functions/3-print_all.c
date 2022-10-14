#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of argument types passed to function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int c = 0;
	char *s, *sep = "";

	va_start(ap, format);
	while (*(format + c))
	{
		switch (*(format + c))
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				c++;
				continue; /* ensures that sep (", ") is never printed first */
		}
		sep = ", ";
		c++;
	}
	printf("\n");
	va_end(ap);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print number followed by new line
 * @separator: an input string to be printed btn numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
int nums;

va_start(ap, n);
for (; i < n; i++)
{
nums = va_arg(ap, int);
printf("%d", nums);
if (separator == NULL)
continue;
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}

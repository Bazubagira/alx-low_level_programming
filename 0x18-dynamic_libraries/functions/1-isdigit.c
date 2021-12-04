#include "main.h"

/**
 * _isdigit - checks for a digit 0 thru 9
 * @c: digit to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

return (0);
}

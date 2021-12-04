#include "main.h"

/**
 * _strncat - concatenate n bbytes to destination string
 *
 * 
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;
while (dest[j] != src[n])
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}

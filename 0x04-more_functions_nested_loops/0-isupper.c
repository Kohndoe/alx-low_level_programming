#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: Function parameter
 * Return: 1 on success or 0 on failure
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

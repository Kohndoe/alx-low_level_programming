#include "main.h"
/**
 * _isdigit - funtion that checks for 0 through 9
 * @c: parameter in consideration
 * Return: 1 success or 0 failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

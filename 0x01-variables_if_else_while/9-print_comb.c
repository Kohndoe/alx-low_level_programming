#include <stdio.h>
/**
 * main - combinations
 *
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
if (i == 9)
putchar(i + '0\n');
else
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}

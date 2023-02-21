#include <stdio.h>
/*
 * main - Entry point
 *
 * Result: Always 0 (success)
 */

int main(void)
{
int c;
int d = 0;

while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar(' ');
}
c++;
}
d++;
}
putchar('\n');
return (0);
}

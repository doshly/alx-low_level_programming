#include <stdio.h>
/**
 *main - Entry point
 *Description: program that prints all possible conbination of two digit number
 *Return: Always 0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i <= j)
{
Putchar((i / 10) + 48);
Putchar((i % 10) + 48);
Putchar(' ');
Putchar((j % 10) + 48);
Putchar((j / 10) + 48);
{
if (i != 96 || j != 96)
{
Putchar(',');
Putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

#include<stdio.h>
/**
 *main -Entry point
 *Description: print alphabet in lowercase
 *Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 98)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

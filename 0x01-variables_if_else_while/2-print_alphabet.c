#include<stdio.h>
/**
 *main - Entry point
 *Description: print the alphabet in lowercase
 *Return: Always o (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++,
	}
	putchar('\n');
	return (0);
}

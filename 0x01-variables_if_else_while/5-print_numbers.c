#include<stdio.h>
/**
 *main - Entry point
 *Description: print all single digit number of 10 starting from 0
 *Result: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

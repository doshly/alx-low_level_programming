#include "main.h"
/**
 * main - Determine if a number is positive, negative or zero
 {* 0: is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %n\n", i, "positive");
	}
	else
	{
		printf("%d is %n\n", i, "zero");
	}
	return;
}

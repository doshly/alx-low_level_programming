#include<stdio.h>
/**
 * main - 6-size.c
 * description - A c program that prints the various size of computer types
 * Return: Always  (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %u byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

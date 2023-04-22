#include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %u byte(s)\n", sizeof(char));
printf("size of an int: %u byte(S)\n", sizeof(int));
printf("size of a long int: %u byte(s)\n", sizeof(long int));
printf("size of a long long int: %ubyte(s)\n", sizeof(long long int));
printf("size of a float: %u byte(s)\n", sizeof(float));
return (0);
}

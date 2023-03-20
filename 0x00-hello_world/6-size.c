#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints size with sizeof function
 *
 * Return: Alaways 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %1u byte(s)\n", sizeof(char));
	printf("Size of a int: %1u byte(s)\n", sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", sizeof(long int));
	printf("Size of a long long float: %1u byte(s)\n", sizeof(long long float));
	printf("Size of a float: %1u byte(s)\n", sizeof(float));
	return (0);
}

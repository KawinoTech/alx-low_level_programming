/*
 * File: 0-positive_or_negative
 * Auth: JKawino
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints string to stdoutput
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	putchar('\n');
	return (0);
}

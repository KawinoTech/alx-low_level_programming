/*
 * File: 8-24_hours.c
 * Auth: JKawino
 */

#include "main.h"

/**
 *  jack_bauer - prints every minute of the day
 *
 * Returns 0
 *
 */

void jack_bauer(void)
{
	int i;

	int j;

	int k;

	int l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 4 && i == 2)
			{
				break;
			}
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(':');
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar('\n');
				}
			}
		}
	}
}

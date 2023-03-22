#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: always 0
 */

void jack_bauer(void)
{
	int h1, m1, h2, m2; /* hour1, minute1, hour2, minute2 */

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (m1 = 0; m1 <= 9; m1++)
		{
			for (h2 = 0; h2 <= 5; h2++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					if (h1 >= 2 && m1 >= 4)
					{
						break;
						_putchar(h1 + 48);
						_putchar(m1 + 48);
						_putchar(58);
						_putchar(h2 + 48);
						_putchar(m2 + 48);
						_putchar('\n')
					}
				}
			}
		}
	}
}

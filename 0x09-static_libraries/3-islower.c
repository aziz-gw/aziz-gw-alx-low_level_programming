#include "main.h"

/**
 *  * _islower - prints lowcase character (c)
 *   * @c: ASCII character
 *    * Return: 1 if c is lowercase, otherwise 0
 *     */

int _islower(int c)
{
	        if (c >= 97 && c <= 122)
			        {
					                return (1);
							        }
		        else
				        {
						                return (0);
								        }
			        _putchar('\n');
}

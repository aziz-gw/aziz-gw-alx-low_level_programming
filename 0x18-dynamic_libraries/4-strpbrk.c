#include "main.h"
#include <stddef.h>

/**
 *  * _strpbrk - searches a string for any of a set of bytes
 *   * @s: first string
 *    * @accept: second string
 *     *
 *      * Return: pointer
 *       */

char *_strpbrk(char *s, char *accept)
{
	        int i_s, i_accept;

		        for (i_s = 0; s[i_s]; i_s++)
				        {
						                for (i_accept = 0; accept[i_accept]; i_accept++)
									                {
												                        if (s[i_s] == accept[i_accept])
																                                return (&s[i_s]);
															                }
								        }
			        return (NULL);
}

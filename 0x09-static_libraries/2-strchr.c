#include "main.h"

/**
 *  * _strchr - locates a char, c in a str, s
 *   * @c: char to locate
 *    * @s: string containg the char
 *     *
 *      * Return: pointer to the first occurence of char c
 *       */

char *_strchr(char *s, char c)
{
	        while (*s != '\0')
			        {
					                if (*s == c)
								                {
											                        return (s);
														                }
							                else
										                {
													                        s++;
																                }
									        }
		        if (*s == c)
				                return (s);
			        else
					                return (0);
}

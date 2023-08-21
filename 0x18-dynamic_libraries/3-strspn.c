#include "main.h"

/**
 *  * _strspn - gets length of a prefix substring
 *   * @s: first string
 *    * @accept: second string
 *     *
 *      * Return: number of bytes
 *       *
 *        */

unsigned int _strspn(char *s, char *accept)
{
	        int byte_num, i, j;

		        byte_num = 0;
			        for (i = 0; s[i]; i++)
					        {
							                for (j = 0; accept[j]; j++)
										                {
													                        if (s[i] == accept[j])
																	                        {
																					                                byte_num++;
																									                                break;
																													                        }
																                }
									                if (!accept[j])
												                        return (byte_num);
											        }
				        return (byte_num);
}

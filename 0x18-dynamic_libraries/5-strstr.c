#include "main.h"
#include <stddef.h>

/**
 *  * _strstr - locates a substring
 *   * @haystack: first string
 *    * @needle: second string
 *     *
 *      * Return: pointer
 *       */

char *_strstr(char *haystack, char *needle)
{
	        int i, j;

		        for (i = 0; haystack[i]; i++)
				        {
						                for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
									                {
												                }
								                if (!needle[j])
											                        return (&haystack[i]);
										        }
			        return (NULL);
}

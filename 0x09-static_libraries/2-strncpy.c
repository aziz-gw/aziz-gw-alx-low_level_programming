#include "main.h"
#include <string.h>

/**
 *  * _strncpy - copies n number of chars from
 *   * first string src to second string dest
 *    * @src: first string
 *     * @dest: second string
 *      * @n: number of chars
 *       *
 *        * Return: dest
 *         */

char *_strncpy(char *dest, char *src, int n)
{
	        strncpy(dest, src, n);
		        return (dest);
}


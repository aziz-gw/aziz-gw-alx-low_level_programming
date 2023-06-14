#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of CL args
 * @av: an arry of pointers to CL args
 *
 * Return: pointer to a new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, av_len = 0;
	char *str;
	int posn; /* current position in string where the
		   * next arg and \n will be copied
		   */

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		av_len += strlen(av[i]) + 1;

	str = malloc(av_len + 1);
	if (str == NULL)
		return (NULL);

	posn = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(str + posn, av[i]);
		posn += strlen(av[i]);
		str[posn] = '\n';
		posn++;
	}
	str[posn] = '\0';

	return (str);
}

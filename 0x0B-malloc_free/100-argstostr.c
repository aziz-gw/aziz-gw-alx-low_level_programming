#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: arg count
 * @av: arg vector
 *
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, t_len = 0, arg_len, initial_pos = 0;
	char *ptr_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	 for (i = 0; i < ac; i++)
		 t_len = strlen(av[i]) + 1;

	 ptr_str = malloc(sizeof(char) * t_len);

	 if (ptr_str == NULL)
		 return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_len = strlen(av[i]);
		memcpy(ptr_str + initial_pos, av[i], arg_len);

		if (i < ac - 1)
			ptr_str[initial_pos + arg_len] = '\n';
		initial_pos += arg_len + 1;
	}

	return (ptr_str);
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function to concatenates all the arguments of program
 * @ac: arguments count
 * @av: arguments vector
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, x, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		x = 0;

		while (s[x++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if  (str == NULL)
		return (NULL);

	for (i = 0, x = 0; i < ac && x < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[x] = s[k];
			k++;
			x++;
		}
		str[x++] = '\n';
	}
	str[x] = '\0';
	return (str);
}

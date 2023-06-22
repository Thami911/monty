#include "monty.h"
/**
 * _strcmp - Function that compares two strings.
 * @str_one: type str compared
 * @str_two: type str compared
 * Return: 0 if str_one and str_two are equals.
 *         another value if they are different
 */
int _strcmp(char *str_one, char *str_two)
{
	int i;

	for (i = 0; str_one[i] == str_two[i] && str_one[i]; i++)
		;
	if (str_one[i] > str_two[i])
		return (1);
	if (str_one[i] < str_two[i])
		return (-1);
	return (0);
}

/**
 * _sch - search if a char is inside a string
 * @srv: string to review
 * @cf: char to find
 * Return: 1 if success 0 if not
 */
int _sch(char *srv, char cf)
{
	int cont = 0;

	while (srv[cont] != '\0')
	{
		if (srv[cont] == cf)
		{
			break;
		}
		cont++;
	}
	if (srv[cont] == cf)
		return (1);
	else
		return (0);
}

/**
 * _strtoky - function that cut a string into tokens depending of the delimit
 * @srv: string to cut in parts
 * @deli: delimiters
 * Return: first partition
 */
char *_strtoky(char *srv, char *deli)
{
	static char *ul_timo;
	int i = 0, j = 0;

	if (!srv)
		srv = ul_timo;
	while (srv[i] != '\0')
	{
		if (_sch(deli, srv[i]) == 0 && srv[i + 1] == '\0')
		{
			ul_timo = srv + i + 1;
			*ul_timo = '\0';
			srv = srv + j;
			return (srv);
		}
		else if (_sch(deli, srv[i]) == 0 && _sch(deli, srv[i + 1]) == 0)
			i++;
		else if (_sch(deli, srv[i]) == 0 && _sch(deli, srv[i + 1]) == 1)
		{
			ul_timo = srv + i + 1;
			*ul_timo = '\0';
			ul_timo++;
			srv = srv + j;
			return (srv);
		}
		else if (_sch(deli, srv[i]) == 1)
		{
			j++;
			i++;
		}
	}
	return (NULL);
}

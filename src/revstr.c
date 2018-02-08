/*
** Shellbear Project, 2018
** Revstr.c
** File description:
** MiniHex
*/

#include "my.h"

char *revstr(char *str)
{
	int j = strlen(str) - 1;
	char letter = '\0';

	for (int i = 0; i < j; i++) {
		letter = str[i];
		str[i] = str[j];
		str[j] = letter;
		j--;
	}
	return (str);
}

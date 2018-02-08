/*
** Shellbear Project, 2018
** Main.c
** File description:
** MiniHex
*/

#include "my.h"

int main(int ac, char **av)
{
	if (ac != 2) {
		fprintf(stderr, "Usage: ./minihex binary\n");
		return (84);
	}
	if (av[1] != NULL && access(av[1], F_OK) != -1)
		hex(av[1]);
	else
		fprintf(stderr, "File not found or can't read file\n");
	return (0);
}
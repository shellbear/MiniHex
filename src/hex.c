/*
** Shellbear Project, 2018
** Hex.c
** File description:
** MiniHex
*/

#include "my.h"

void copy(char *src, char *dest)
{
	int j = strlen(dest);

	for (int i = 0; src[i] != '\0'; i++) {
		dest[j] = src[i];
		j++;
	}
}

char *hexa(char *str)
{
 	char *result = malloc(sizeof(char) * sizeof(str));
	char *temp = malloc(sizeof(char));

	if (result == NULL) {
		fprintf(stderr, "Malloc failed, exited\n");
		exit (84);
	}
	for (int i = 0; str[i] != '\0'; i += 1) {
		sprintf(temp, "%x", str[i]);
		copy(temp, result);
	}
	result[strlen(result)] = '\0';
	return (result);
}


char *open_file(char *file)
{
	int fd = open(file, O_RDONLY);
	struct stat st;
	char *buffer = NULL;

	stat(file, &st);
	buffer = malloc(st.st_size);
	if (buffer == NULL) {
		fprintf(stderr, "Malloc failed, exited\n");
		exit (84);
	}
	read(fd, buffer, st.st_size);
	return (buffer);
}

void hex(char *file)
{
	char *buff = NULL;

	buff = open_file(file);
	printf("%s\n", hexa(buff));
	free(buff);
}
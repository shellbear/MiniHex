/*
** Shellbear Project, 2018
** My.h
** File description:
** MiniHex
*/

#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void hex(char *file);
char *revstr(char *str);
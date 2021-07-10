#ifndef __MYSTRING_H
#define __MYSTRING_H

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int str_len (char *s);

void str_cpy(char *s1, char *s2);

void str_cat( char *s1, char *s2);

int str_cmp(char *s1, char *s2);

void string_main();

#endif

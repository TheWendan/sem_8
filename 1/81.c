#include <stdio.h>
#include <string.h>
#include "81.h"



int strend(char *s, char *t)
{
	s += strlen(s) - strlen(t); // сдвиг
	while (*s && *t) 
		if (*s++ != *t++) // проверка на совпаление
			return 0;;
	return 1;
}
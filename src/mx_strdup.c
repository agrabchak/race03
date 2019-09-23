#include "header.h"

char *mx_strdup(const char *str) {
    char *p = 0;
    if (!*str)
        return NULL;
    p = mx_strnew(mx_strlen(str));
    if (p == NULL)
	return NULL;
    p = mx_strcpy(p, str);
    return p;
}


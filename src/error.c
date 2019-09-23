#include "header.h"

void error(const char *str, char *arg) {
 if (!arg)
    mx_printstr(str);
 else
    mx_printstr(str);
    mx_printstr(arg);
    exit(1);
}


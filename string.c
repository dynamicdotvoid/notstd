/*  string.c
 *  Author: Lucas Merritt/dynamic.void
 *  Date: 12/11/22
 *  String helper functions, partner to string.h  */

#include "string.h"

int notstd_strcmp(const char *str1, const char *str2) {
    while(*str1 != '\0' && *str2 != '\0') {
        if(*str1 == '\0' || *str2 == '\0')
            return -1;
        if(*str1 > *str2)
            return 1;
        if(*str1 < *str2)
            return -1;
        str1++, str2++;
    }
    return 0;
}

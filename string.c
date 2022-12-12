/*  string.c
 *  Author: Lucas Merritt/dynamic.void
 *  Date: 12/11/22
 *  String helper functions, partner to string.h  */


#include <stddef.h>
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

char *notstd_strcpy(char *dest, const char *src) {
    char *returnValue = dest;
    int destLength = notstd_strlen(dest);
    while(*src != '\0') {
        *dest = *src;
        dest++, src++, destLength--;
    }
    for(int i=0; i<destLength; i++,dest++) {
        *dest = '\0';
    }
    return returnValue;
}

size_t notstd_strlen(const char *str) {
    int index = 0;
    while(*str != '\0') {
        str++, index++;
    }
    return index;
}

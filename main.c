/*  main.c
 *  Author: Lucas Merritt/dynamic.void
 *  Date: 12/11/22
 *  Main file for function testing  */


#include <stddef.h>
#include <stdio.h>
#include "string.h"

int main() {
    /* notstd_strcmp example
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    printf("result: %d\n", notstd_strcmp(str1, str2)); */

    /* notstd_strlen */
    char testString[] = "notstd_strlen";
    printf("result: %zd\n", notstd_strlen(testString));
}

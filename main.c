/*  main.c
 *  Author: Lucas Merritt/dynamic.void
 *  Date: 12/11/22
 *  Main file for function testing  */


#include <stddef.h>
#include <stdio.h>
#include "string.h"

int main() {
    /* notstd_strcmp
    char str1[] = "notstd_strcmp", str2[] = "strcmp", str3[] = "notstd_strcmp";
    printf("result: %d\n", notstd_strcmp(str1, str2)); */

    /* notstd_strcpy */
    char sourceString[] = "notstd_strcpy";
    char destinationString[100];
    notstd_strcpy(destinationString, sourceString);
    printf("destinationString: %s\n", destinationString);

    /* notstd_strlen
    char testString[] = "notstd_strlen";
    printf("result: %zd\n", notstd_strlen(testString)); */
}

/*  string.h
 *  Author: Lucas Merritt/dynamic.void
 *  Date: 12/11/22
 *  Header file for string-related functions, notstd project  */


#include <stddef.h>

/*
 * Compares the string pointed to by str2 to the string pointed to by str2
 *
 * str1: first string to be compared
 * str2: second string to be compared
 *
 * return < 0: str1 is less than str2
 * return > 0: str2 is less than str1
 * return = 0: str1 and str2 are equal
 */
int notstd_strcmp(const char *str1, const char *str2);

/*
 * Finds the length of the string up to but not including the null terminator.
 *
 * str: the string to find the length of
 */
size_t notstd_strlen(const char *str);

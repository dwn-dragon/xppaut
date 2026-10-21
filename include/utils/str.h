#pragma once

#ifndef XPPAUT_UTILS_STR_INCLUDE
#define XPPAUT_UTILS_STR_INCLUDE

//	Implements useful functions for handling strings (`char*`)
//	These functions must be GENERIC. For specific applications (e.g.: tokens) use more specific files.

#include <string.h>

/**
 * @brief Makes every character of the string upper case. NOTE: It changes the string. 
 * 
 * @param[in] str String to lower casify
 * @param[in] n Max amount 
 * @return char* `str`
 */
char* strnupr(char* str, size_t n);
/**
 * @brief Makes every character of the string lower case. NOTE: It changes the string.
 * 
 * @param str 
 * @param n 
 * @return char* 
 */
char* strnlwr(char* str, size_t n);

#warning "Remove those when no longer needed"

char* strupr(char* str);
char* strlwr(char* str);

#endif	//	include guard

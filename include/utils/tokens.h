#pragma once

#ifndef XPPAUT_UTILS_TOKENS_INCLUDE
#define XPPAUT_UTILS_TOKENS_INCLUDE

#include <stddef.h>

//	Handles tokenization of strings.
//	Uses function overload to allow for multiple variants

//	TODO: Token iterator.
//	Implement a C++ style iterator using tokens.

/**
 * @brief Starts the tokenization of the string. It changes the string. NOTE: It is not thread-safe
 * @param[in] str String to tokenize
 * @param[in] del Delimiter for first token
 * @return The first token
 */
char* tok_get_first(char* str, const char* del);
/**
 * @brief Finds the next token inside the string. NOTE: It is not thread-safe.
 * @param[in] del Delimiter to find the end of token
 * @return The next token
 */
char* tok_get_next(const char* del);

#endif	//	include guard

#pragma once

#ifndef XPPAUT_UTILS_TOKENS_INCLUDE
#define XPPAUT_UTILS_TOKENS_INCLUDE

#include <stddef.h>

//	Handles tokenization of strings.
//	Uses function overload to allow for multiple variants

//	TODO: Token iterator.
//	Implement a C++ style iterator using tokens.

typedef struct
{
	size_t name, value;
} tok_pair_t;

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

/**
 * @brief Cuts a token into name and value pair. Token must be null-terminated.
 * 
 * @param[in] token String to cut up
 * @param[out] name Buffer where the name is stored.
 * @param[out] value Buffer where the value is stored.
 * @return A struct containing the lengths of name and value.
 */
tok_pair_t tok_split_apart(const char* token, char *name, char *value);

#endif	//	include guard

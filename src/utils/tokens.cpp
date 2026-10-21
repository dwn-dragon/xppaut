extern "C" 
{

#include "utils/tokens.h"

#include <string.h>

char* tok_get_first(char* str, const char* del) {
	return strtok(str, del);
}
char* tok_get_next(const char* del) {
	return strtok(nullptr, del);
}

tok_pair_t tok_split_apart(const char* token, char* name, char* value) {
	auto len = strlen(token);
	auto name_i = strcspn(token, "=");

	tok_pair_t res{ 0, 0 };

	//	pre-terminates
	name[0] = 0;
	value[0] = 0;

	//	copies into the name and terminates
	memcpy(name, token, name_i);
	name[name_i] = 0;
	//	doesn't include the terminator
	res.name = name_i - 1;

	//	the full token is in name, no value
	if (len <= name_i)
		return res;

	//	copies the rest of the token to value and terminates
	memcpy(value, token + (name_i + 1), len - (name_i + 1));
	value[len - (name_i + 1)] = 0;
	//	doesn't include the terminator
	res.value = len - (name_i + 1) - 1;

	return res;
}

}

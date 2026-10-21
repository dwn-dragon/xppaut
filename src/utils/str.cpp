#include <stddef.h>

//	applies the function Fn to all character of str
//	it stops if null termination is found BEFORE n
template< class Fn >
static inline char* strnapply(char* str, size_t n, Fn&&	fn) {
	for (size_t i = 0; i < n; i++) {
		auto& c = str[i];
		if (c == '\0')
			break;
		
		fn(c);
	}

	return str;
}

extern "C"
{

#include "utils/str.h"
#include <ctype.h>

//	converts to upper case
char* strnupr(char* str, size_t n) {
	return strnapply(str, n, [](char& c) -> void {
		c = toupper(c);
	});
}
//	converts to lower case
char* strnlwr(char *str, size_t n) {
	return strnapply(str, n, [](char& c) -> void {
		c = tolower(c);
	});
}

char* strupr(char* str) {
	return strnupr(str, -1);
}
char* strlwr(char* str) {
	return strnlwr(str, -1);
}

}

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

}

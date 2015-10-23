#include "lowercase.h"
int lowercase(char a){
	if (a >= 'A' && a <= 'Z')
		return a+32;
	return a;
}

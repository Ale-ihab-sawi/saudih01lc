#include <stdio.h>
#include "lowercase.h"
int main(int argc, char* argv[]){

	char a;
	a = getchar();
	while (a != EOF){
		printf("%c",lowercase(a));
		a = getchar();
	}
	return 0;
}

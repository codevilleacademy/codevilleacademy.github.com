#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

	int (*p)(int) = foo;

	(*p)(100);

	return 0;
}

int foo(){
	printf("Hello, World!\n");
}

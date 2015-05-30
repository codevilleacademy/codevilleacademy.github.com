#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

	int (*p)() = foo;

	(*p)();

	return 0;
}

#include <stdio.h>

int foo();

int main(int argc, char * argv[]) {

	int (*p)() = foo;

	(*p)(100);

	return 0;
}

int foo(int a){
	printf("%d\n", a);
}

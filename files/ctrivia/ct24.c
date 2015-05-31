#include <stdio.h>

int foo() {
	(1 > 2) ? return 1 : return 2;
}

int main(int argc, char * argv[]) {

	printf("%d\n", foo());

	return 0;
}

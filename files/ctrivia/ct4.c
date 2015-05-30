#include <stdio.h>

int main(int argc, char * argv[]) {
	extern int a;
	a = 10;
	printf("%d\n", a);

	return 0;
}

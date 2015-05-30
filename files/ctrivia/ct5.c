#include <stdio.h>

int a = 10;

int main(int argc, char * argv[]) {
	extern int a;
	printf("%d\n", a);

	return 0;
}

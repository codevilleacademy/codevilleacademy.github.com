#include <stdio.h>

int main(int argc, char * argv[]) {
	int a = 1, b = 1, c = 1;

	c = ++a || ++b && ++c;
	printf("%d, %d, %d\n", a, b, c);

	return 0;
}

#include <stdio.h>

int main(int argc, char * argv[]) {
	int a = 16, b;

	b = a >= 8 ? b = 10: b = 20;

	printf("%d\n", b);

	return 0;
}

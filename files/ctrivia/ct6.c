#include <stdio.h>

int main(int argc, char * argv[]) {
	int a = 100, b = 200, c = 30, result;

	result = b < a < c;
	printf("%d\n", result);

	return 0;
}

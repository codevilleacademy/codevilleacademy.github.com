#include <stdio.h>
#define FOO(a, b)  ( (a) > (b) ) ? (a) : (b);

int main(int argc, char * argv[]) {

	int x = 20, y = 10, z = 0;

	z = FOO( ++x, y++ );
	printf("%d, %d, %d\n", x, y, z);

	return 0;
}

#include <stdio.h>

int main(int argc, char * argv[]) {

	float a = 10;

	switch(a) {
		case 1:
			printf("1\n");
			break;
		default:
			printf("DEFAULT\n");
			break;
	}

	return 0;
}

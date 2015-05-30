#include <stdio.h>

int main(int argc, char * argv[]) {

	int a = 10;

	switch(a) {
		case 1:
			printf("1\n");
			continue;
		default:
			printf("DEFAULT\n");
			break;
	}

	return 0;
}

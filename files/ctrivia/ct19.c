#include <stdio.h>

int main(int argc, char * argv[]) {

	int a = 9;

	switch(a) {
		case 9:
			printf("10\n");
			break;
		case 4+5:
			printf("11\n");
			break;
	}

	return 0;
}

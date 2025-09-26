#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int Line, i, j, k, x;
	printf("정수 입력: ");
	scanf("%d", &Line);

	for (i = 0; i < Line; i++) {
		x = Line - i;
		for (j = 0; j < i; j++) printf(" ");
		for (k = 0; k < x; k++) printf("*");
		printf("\n");
	}

	return 0;
}
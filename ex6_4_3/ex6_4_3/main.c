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

	printf("--------------------------------\n");

	for (i = 0; i < Line; i++) {
		x = Line - i;
		for (j = -1; j < i; j++) printf("*");
		for (k = -1; k < x; k++) printf(" ");
		
		printf("\n");
	}

	printf("--------------------------------\n");

	for (i = 0; i < Line; i++) {
		x = Line - i;
		for (k = 0; k < x; k++) printf(" "); 
		for (j = -1; j < i; j++) printf("*");
		
		printf("\n");
	}

	printf("--------------------------------\n");

	for (i = 0; i < Line; i++) {
		x = Line - i;
		for (k = 0; k < x; k++) printf("*");
		for (j = 0; j < i; j++) printf(" ");

		printf("\n");
	}

	printf("----------------- ▼ ---------------\n");

	for (i = 0; i < Line; i++) {
		x = Line - i;
		for (j = 0; j < i; j++) printf(" ");
		for (k = 0; k < x; k++) printf("*");

		for (k = 1; k < x; k++) printf("*");
		for (j = 1; j < i; j++) printf(" ");

		printf("\n");
	}

	printf("----------------- ▲ ---------------\n");

	for (i = 0; i < Line; i++) {
		x = Line - i;
		for (k = 1; k < x; k++) printf(" ");
		for (j = 1; j < i; j++) printf("*");
		
		for (j = 0; j < i; j++) printf("*");
		for (k = 0; k < x; k++) printf(" ");

		printf("\n");
	}

	printf("----------------- ◆ ---------------\n");

	for (i = 0; i < Line; i++) {
		x = Line - i;
		if (i < Line / 2) continue;
		for (k = 0; k < x; k++) printf(" ");
		for (j = 0; j < i; j++) printf("*");

		for (j = 0; j < i - 1; j++) printf("*");
		for (k = 0; k < x - 1; k++) printf(" ");

		printf("%d\n", i);
	}
	printf("\n");
	for (i = 0; i < Line; i++) {
		x = Line - i;
		if (i < Line / 2 + 2) continue;
		for (j = 0; j < i; j++) printf(" ");
		for (k = 0; k < x; k++) printf("*");

		for (k = 1; k < x; k++) printf("*");
		for (j = 1; j < i; j++) printf(" ");

		printf("%d\n", i);
	}

	return 0;
}
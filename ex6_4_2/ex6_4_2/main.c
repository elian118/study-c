#include <stdio.h>

int main(void) {
	int i, j;
	printf("----------- ������ ��� -----------\n");
	for (i = 1; i < 10; i++) {
		printf("%d�� �� \n", i);
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	printf("--------------- end --------------\n");

	return 0;
}
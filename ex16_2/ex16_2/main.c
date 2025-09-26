#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); // 4 * 5 = 20바이트 할당
	if (pi == NULL) {
		printf("메모리가 부족합니다!");
		exit(1);
	}

	printf("다섯 명의 나이를 입력하세요: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &pi[i]); // 입력 값을 읽는 명령 → 5개의 숫자를 모두 입력받아 읽을 수 있게 될때까지 물어보게 됨
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이: %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}
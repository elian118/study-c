#include <stdio.h>
#include <stdlib.h> // malloc, free 함수 사용을 위한 헤더

int main(void) {
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int)); // 메모리 동적 할당 후 포인터 연결
	if (pi == NULL) {	// 메모리 부족 등으로 동적 할당 실패 시 NULL 포인터 반환됨
		printf("# 메모리가 부족합니다.\n");
		exit(1); // 프로그램 종료
	}
	pd = (double *)malloc(sizeof(double));
	
	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 %d\n", *pi);
	printf("실수형으로 사용 %.1lf\n", *pd);

	free(pi); // 동적 할당 영역 반환
	free(pd);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void) {
	int sel;

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요: ");
	scanf("%d", &sel);

	switch (sel) {
		case 1: func(sum); break;
		case 2: func(mul); break;
		case 3: func(max); break;
	}

	return 0;
}

void func(int (*fp)(int, int)) {
	int a, b;                        // 두 정수를 저장할 변수
	int res;                         // 함수의 반환값을 저장할 변수

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);           // 두 정수 입력
	res = fp(a, b);                  // 함수 포인터로 가리키는 함수를 호출
	printf("결괏값은 : %d\n", res);  // 반환값 출력
}

int sum(int a, int b) {
	return (a + b);
}

int mul(int a, int b) {
	return (a * b);
}

int max(int a, int b) {
	return a > b ? a : b;
}
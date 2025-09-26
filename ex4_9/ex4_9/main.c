#include <stdio.h>

int main() {
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기: %d\n", sizeof(a));
	printf("double형 변수의 크기: %d\n", sizeof(b));
	printf("정수형 상수의 크기: %d\n", sizeof(10));
	printf("수식의 결괏값의 크기: %d\n", sizeof(1.5 + 3.4)); // 실수형 연산 → double형 묵시적 형변환
	printf("char 자료형의 크기: %d\n", sizeof(char));

	printf("-------자료형별 크기 및 표현 가능한 숫자 범위는 대체로 표준을 따르지만, CPU/컴파일러/OS 따라 가변적-----------\n");

	return 0;
}
#include <stdio.h>

int main() {
	int a = 10;
	int b = 12;

	printf("a & b: %d\n", a & b);	// 둘 다 1일 때만 1
	printf("a ^ b: %d\n", a ^ b);	// 둘 중 하나만 1일 때 1
	printf("a | b: %d\n", a | b);	// 둘 중 하나라도 1이면 1
	printf("~a: %d\n", ~a);			// 비트 반전
	printf("a << 1: %d\n", a << 1);	// 2의 1승을 곱함				- 메모리 특성 상 소수점 이하 값까지 완전 똑같을 순 없음
	printf("a >> 2: %d\n", a >> 2); // 2의 2승으로 나눔 (몫 반환)	- 메모리 특성 상 소수점 이하 값까지 완전 똑같을 순 없음

	unsigned int N = -1;
	printf("N: %u, %d\n", N, N);

	int N2 = 1;
	N2 *= -N2 - -N2 * +N2 + +N2;

	return 0;
}
#include <stdio.h>

int *sum(int a, int b);

int main(void) {
	int *resp;

	resp = sum(10, 20);
	printf("두 정수의 합: %d", *resp);

	return 0;
}

int *sum(int a, int b) {
	static int res; // 정적 지역 변수는 스코프를 벗어나더라도 메모리에 남아 있다.

	res = a + b;

	return &res; // 그래서 지역 변수와 달리, 정적 지역 변수의 주소를 반환하는 건 가능하다.
}
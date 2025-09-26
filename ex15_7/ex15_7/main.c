#include <stdio.h>

int sum(int, int);

int main(void) {
	int (*pf)(int, int);
	int res;

	pf = sum; // 구체화되기 전의 함수의 함수명은 단순히 함수를 가리키는 주소값에 불과하다.
	res = pf(10, 20);
	printf("result: %d\n", res);

	return 0;
}

int sum(int a, int b) {
	return (a + b);
}
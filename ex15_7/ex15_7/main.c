#include <stdio.h>

int sum(int, int);

int main(void) {
	int (*pf)(int, int);
	int res;

	pf = sum; // ��üȭ�Ǳ� ���� �Լ��� �Լ����� �ܼ��� �Լ��� ����Ű�� �ּҰ��� �Ұ��ϴ�.
	res = pf(10, 20);
	printf("result: %d\n", res);

	return 0;
}

int sum(int a, int b) {
	return (a + b);
}
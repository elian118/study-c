#include <stdio.h>

int main() {
	int a = 10;
	int b = 12;

	printf("a & b: %d\n", a & b);	// �� �� 1�� ���� 1
	printf("a ^ b: %d\n", a ^ b);	// �� �� �ϳ��� 1�� �� 1
	printf("a | b: %d\n", a | b);	// �� �� �ϳ��� 1�̸� 1
	printf("~a: %d\n", ~a);			// ��Ʈ ����
	printf("a << 1: %d\n", a << 1);	// 2�� 1���� ����				- �޸� Ư�� �� �Ҽ��� ���� ������ ���� �Ȱ��� �� ����
	printf("a >> 2: %d\n", a >> 2); // 2�� 2������ ���� (�� ��ȯ)	- �޸� Ư�� �� �Ҽ��� ���� ������ ���� �Ȱ��� �� ����

	unsigned int N = -1;
	printf("N: %u, %d\n", N, N);

	int N2 = 1;
	N2 *= -N2 - -N2 * +N2 + +N2;

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void) {
	int sel;

	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ���: ");
	scanf("%d", &sel);

	switch (sel) {
		case 1: func(sum); break;
		case 2: func(mul); break;
		case 3: func(max); break;
	}

	return 0;
}

void func(int (*fp)(int, int)) {
	int a, b;                        // �� ������ ������ ����
	int res;                         // �Լ��� ��ȯ���� ������ ����

	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);           // �� ���� �Է�
	res = fp(a, b);                  // �Լ� �����ͷ� ����Ű�� �Լ��� ȣ��
	printf("�ᱣ���� : %d\n", res);  // ��ȯ�� ���
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
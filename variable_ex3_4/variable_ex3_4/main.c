#include <stdio.h>

int main(void) {
	unsigned int a;

	a = 4294967295;		// ū ��� ����
	printf("%d\n", a);  // %d�� ���: -1(- ������ ��µ� - �����÷ο�)
	a = -1;				// ���� ���� - unsigned���� ǥ���� �� ���� ��
	printf("%u\n", a);	// %u�� ���: 4294967295(ū ����� ��µ� - �����÷ο�)

	return 0;
}
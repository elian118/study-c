#include <stdio.h>

int main(void) {
	double apple;	// �Ǽ�
	int banana;		// ����
	int orange;		// ����

	apple = 5.0 / 2.0;	// �Ǽ��� ��꿡���� �Ҽ��� ���ϰ� ������
	banana = 5 / 2;		// ������ ��꿡���� �Ҽ��� ���ϰ� ������ - �� ���´�
	orange = 5 % 2;		// ������ �����ڴ� ������ ��꿡�� ��� ���� - C���� �Ǽ� ���꿡�� ������ ������ ���� ����

	printf("apple: %.1lf\n", apple);
	printf("banana: %d\n", banana);	
	printf("orange: %d\n", orange);

	return 0;
}
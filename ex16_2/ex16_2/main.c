#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); // 4 * 5 = 20����Ʈ �Ҵ�
	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�!");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է��ϼ���: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &pi[i]); // �Է� ���� �д� ��� �� 5���� ���ڸ� ��� �Է¹޾� ���� �� �ְ� �ɶ����� ����� ��
		sum += pi[i];
	}
	printf("�ټ� ���� ��� ����: %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}
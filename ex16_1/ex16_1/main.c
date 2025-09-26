#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ� ����� ���� ���

int main(void) {
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int)); // �޸� ���� �Ҵ� �� ������ ����
	if (pi == NULL) {	// �޸� ���� ������ ���� �Ҵ� ���� �� NULL ������ ��ȯ��
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1); // ���α׷� ����
	}
	pd = (double *)malloc(sizeof(double));
	
	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� %d\n", *pi);
	printf("�Ǽ������� ��� %.1lf\n", *pd);

	free(pi); // ���� �Ҵ� ���� ��ȯ
	free(pd);

	return 0;
}
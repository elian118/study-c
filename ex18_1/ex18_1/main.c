#include <stdio.h>

int main(void) {
	FILE* fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("������ ������ �ʽ��ϴ�.\n");
		return 1;
	}
	printf("������ ���Ƚ��ϴ�.\n");
	fclose(fp);

	return 0;
}
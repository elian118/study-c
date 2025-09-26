#include <stdio.h>

int main(void) {
	short sh = 32767;					// short���� �ִ� �ʱ�ȭ
	int in = 2147483647;				// int���� �ִ� �ʱ�ȭ
	long ln = 2147483647;				// long���� �ִ� �ʱ�ȭ
	long long lln = 123451234512345;	// ���� ū �� �ʱ�ȭ

	printf("short�� ���� ���: %d\n", sh);
	printf("int�� ���� ���: %d\n", in);
	printf("long�� ���� ���: %ld\n", ln);
	printf("long long�� ���� ���: %lld\n", lln); // long long���� lld�� ���

	printf("--------------------------------------------------\n");

	printf("short���� ũ��: %d����Ʈ(%d��Ʈ)\n", sizeof(short), sizeof(short) * 8); // sizeof: ����Ʈ ���� ũ�� ���
	printf("int���� ũ��: %d����Ʈ(%d��Ʈ)\n", sizeof(int), sizeof(int) * 8); // sizeof: ����Ʈ ���� ũ�� ���
	printf("long���� ũ��: %d����Ʈ(%d��Ʈ)\n", sizeof(long), sizeof(long) * 8); // sizeof: ����Ʈ ���� ũ�� ���
	printf("long long���� ũ��: %d����Ʈ(%d��Ʈ)\n", sizeof(long long), sizeof(long long) * 8); // sizeof: ����Ʈ ���� ũ�� ���

	return 0;
}
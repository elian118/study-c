#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	char str[20] = "mango tree";
	int limit = 5;
	strncpy(str, "apple-pie", limit); // "apple-pie"���� �ټ� ���ڸ� ����
	//str[limit] = '\0'; // ���ڿ� ���� ���� �߰� �� �ڿ� "tree"�� �����
	printf("%s\n", str);

	return 0;
}
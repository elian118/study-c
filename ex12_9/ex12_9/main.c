#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	char str[20] = "mango tree";
	int limit = 5;
	strncpy(str, "apple-pie", limit); // "apple-pie"에서 다섯 문자만 복사
	//str[limit] = '\0'; // 문자열 종료 문자 추가 시 뒤에 "tree"가 사라짐
	printf("%s\n", str);

	return 0;
}
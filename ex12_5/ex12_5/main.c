#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80];

	fgets(str, sizeof(str), stdin); // 문자열 입력 - 최대 79자 + NULL(종료문자)까지 허용

	str[strlen(str) - 1] = '\0'; // 문자열 끝에 개행문자(\n) 제거 및 \0(NULL(종료문자))로 대체
	printf("입력된 문자열은 %s입니다.\n", str);

	return 0;
}

// fgets 함수는 gets 함수보다 안전하게 문자열을 입력받는 함수이며, 두번째 인자로 반드시 입력버퍼의 크기를 지정해야 합니다. 이렇게 하면 버퍼 오버플로우를 방지할 수 있습니다.
// stdin은 표준입력을 의미하며, fgets 함수에서 키보드와 연결된 표준 입력 버퍼만 사용하도록 지정합니다.
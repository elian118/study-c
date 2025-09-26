#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void) {
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;
}

void auto_func(void) {
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void) {
	static int a; // 정적변수는 초기화 안 하면  0으로 자동 초기화됨

	a++;
	printf("%d\n", a);
}

// 정적 지연 변수는 선언된 블록 안에서만 사용되는 전역 변수와 같다. 
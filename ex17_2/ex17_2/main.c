#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char *intro;							// 멤버 포인터 → 단순히 메모리 주소만 가리키는 포인터에 정보를 직접 저장할 수는 없으므로, 정보를 저장하려면 먼저 이 포인터와 연결될 메모리를 동적 할당해야만 한다
};

int main(void) {
	struct profile yuni;

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);		// 자기 소개를 저장할 공간을 동적 할당
	printf("자기소개: ");
	gets(yuni.intro);
	
	printf("이름: %s\n", yuni.name);
	printf("나이: %d\n", yuni.age);
	printf("키: %.1lf\n", yuni.height);
	printf("자기소개: %s\n", yuni.intro);
	free(yuni.intro);						// 동적 할당 영역 반환

	return 0;
}
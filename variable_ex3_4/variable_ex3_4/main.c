#include <stdio.h>

int main(void) {
	unsigned int a;

	a = 4294967295;		// 큰 양수 저장
	printf("%d\n", a);  // %d로 출력: -1(- 음수로 출력됨 - 오버플로우)
	a = -1;				// 음수 저장 - unsigned에서 표현할 수 없는 값
	printf("%u\n", a);	// %u로 출력: 4294967295(큰 양수로 출력됨 - 오버플로우)

	return 0;
}
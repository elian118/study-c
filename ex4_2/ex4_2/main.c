#include <stdio.h>

int main(void) {
	double apple;	// 실수
	int banana;		// 정수
	int orange;		// 정수

	apple = 5.0 / 2.0;	// 실수형 계산에서는 소수점 이하가 유지됨
	banana = 5 / 2;		// 정수형 계산에서는 소수점 이하가 버려짐 - 몫만 나온다
	orange = 5 % 2;		// 나머지 연산자는 정수형 계산에만 사용 가능 - C에서 실수 연산에는 나머지 개념이 없기 때문

	printf("apple: %.1lf\n", apple);
	printf("banana: %d\n", banana);	
	printf("orange: %d\n", orange);

	return 0;
}
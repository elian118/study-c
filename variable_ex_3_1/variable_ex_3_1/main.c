#include <stdio.h>

int main(void) {
	int a;
	int b, c = 10;
	double da;
	char ch;

	a = 10;
	b = a; // 복사 후 대입 → 이후 a 값을 변경해도 b 값은 변하지 않음
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값: %d\n", a);
	printf("변수 b의 값: %d\n", b);
	printf("변수 c의 값: %d\n", c);
	printf("변수 da의 값: %.1lf\n", da);
	printf("변수 ch의 값: %c\n", ch);

	return 0;
}
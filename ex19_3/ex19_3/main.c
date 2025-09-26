#include <stdio.h>
// 전처리기에 선언된 함수를 매크로 함수라고 한다. 매크로 함수는 컴파일러가 실행하는 개념이 아니고 미리 선언한 코드를 복사 붙여넣기 집어넣어 실행되므로, 보통은 한 줄안에 끝날 수 있는 짧고 간단한 함수로 사용한다.
// 또, 복사 붙여넣기라서, 꼼꼼히 괄호를 씌우지 않으면 컴파일러가 처리하던 연산 순서와도 틀려져 본래 의도와 달라질 수 있다.
#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))

int main(void) {
	int a = 10, b = 10;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res: %d\n", res);

	return 0;
}
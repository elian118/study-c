#include <stdio.h>

int main() {
	printf("Hello, World!\n");
	/*
	int N5;
	char c;
	double a123;
	int NiceNice;

	int N; float F; char C;
	char ch1, ch2, ch3;
	char ch1_ch2_ch3;

	int N1, N2, N3, N4, N5;

	int N = 5, M = 7;

	char a;

	int N1 = 10, N2 = 20;
	int N = 32;
	*/

	double F = 1.0;
	//F = 36.5 % 3.65; // 오류: 나머지 연산자는 정수형에만 사용 가능 (%: mod: modulus)
	//F = 36 / 25; 또는
	F = 36.5 / 3.65; // 10

	// 참고: 나머지 연산자를 활용한 주사위 만들기
	// X % 6 → (0 ~ 5) + 1 → 1 ~ 6

	printf("%f\n", F);

	int N;
	N = 3 * 5;
	printf("%d\n", N);

	char ch;

	ch = 'A' + 3; // 간접 형변환
	printf("%d\n", ch); // 68
	printf("%c\n", ch); // D

	int a = 2, b = 4, c = 6;
	int x = 20;
	// ax2 + bx + c = 46
	int Z = (a * x * x) + (b * x) + c - 46;
	printf("%d\n", Z); // 54

	float F1 = 5.0;
	double F2 = 5.5;
	printf("05) %f\n", F1 + F2); // 10.500000 // 간접 형변환 - 표현할 수 있는 범위가 더 큰 자료형으로 자동 변환
	printf("05) %d\n", F1 + F2); // 10 // 간접 형변환 - 표현할 수 있는 범위가 더 큰 자료형으로 자동 변환 후, 정수형으로 강제 형변환

	char ch5 = 'C';
	float F5 = 5.0;
	printf("06) %f\n", ch5 + F5);
	printf("06) %c\n", (int)(ch5 + F5)); // 주의! 오버플로우가 발생하기 전에 미리 적합한 자료형으로 형변환 필요

	int N2 = 5, M2 = 7, K2 = 9;
	N2 += 5, M2 *= 7, K2 /= 9; // N2 = N2 + 5, M2 = M2 * 7, K2 = K2 / 9
	printf("07) %d %dm %d\n", N2, M2, K2);

	int N3 = 1;
	//++N3++; // 이 경우 무엇을 먼저 계산되는 건지, C언어 FM에도 정의되어 있지 않음. 여하튼 아래와 같이 우선순위가 어떤경우가 되든 중간 계산 도중 값을 담을 변수가 없어 모두 오류로 귀결된다.
	//++(N3++); or (++N3)++; // 어느 방식이든 오류: lvalue가 아님: 괄호 안 계산 결과를 할당할 변수(메모리 공간)이 없어 이후 괄호 밖 계산을 할 수 없기 때문
	int N4 = N3++;
	N3 = ++N4;
	printf("08) %d\n", N3);

	return 0;
}
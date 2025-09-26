#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Hello World\n");
	printf("----------------------------\n");
	printf("[01] 잘못된 부분을 찾아서 고쳐 보세요.\n");
	printf("----------------------------\n");

	printf("1.1) %d %d %d\n", 5, 10, 20); // %d: 정수형 - decimal(10진수)
	printf("1.2) %c %s\n", 'A', "32767");
	/*
		문자  : 'a' 1byte
		문자열: "abc" 1byte * 3 + 1byte('\0') → \0: null 문자(문자열의 끝)
	*/
	printf("1.3) %d, %d, %d은 %d의 약수\n", 1, 2, 3, 6);
	printf("1.4) %d, %.2lf\n", 127, 1.05);
	printf("1.5) printf()\n");
	printf("1.6) %d \n", 77);
	printf("1.7) %s\n", "256은 '2의 8승'입니다."); // ' 대신 " 쓰려면 \를 앞에 붙여준다 → printf("1.7) %s\n", "256은 \"2의 8승\"입니다.");
	printf("1.8) %5d\n", 127); // 5칸 확보 후 오른쪽 정렬
	printf("1.9) %s\n", "127");
	printf("1.10) 나의 이름은 김광회입니다.\n");
	printf("1.11) %c %c %c\n", 'A', 'B', 'C');
	printf("1.12) %s%s%s\n", "김", "광", "회"); // 한글은 2byte → %c로 출력 불가
	printf("1.13) %s가 가장 좋아하는 숫자는 %d입니다.\n", "김광회", 3);
	printf("1.14) 100원짜리 동전에는 누가 있을까요?.\n");
	printf("1.15) Hello World !\n");
	system("pause");

	printf("----------------------------\n");
	printf("[02] scanf 함수를 사용한 입력 코드입니다. 잘못된 부분을 찾으세요.\n");
	printf("----------------------------\n");
	/*
	int N1;
	scanf("%d ", &N1); // &N1: N1의 주소(메모리 번지) - address of N1

	int *N2;
	scanf("%d", N2); // *N2: 포인터 변수(주소를 저장하는 변수) → 포인터 변수에는 &를 scanf 매개변수로 넣을 수 없다 scanf("%d", &N2);
	
	char ch;
	scanf("%c", &ch);

	char ch1, ch2;
	scanf("%c", &ch1);
	scanf("%c", &ch2);

	float N;
	scanf(" 정수 : %f ", &N);

	char ch;
	int N;
	scanf("%c", &ch);
	scanf("%d", &N);

	// scanf("%d", 10); // 값이기 때문에 불가능(Locator value 가 아님)
	int N;
	scanf("%d ", N);

	// 07. scanf( " 문자 : %c ", 'A' ); // 포맷 문자열에 맞지 않는 값 존재
	char A;
	scanf("%c", A);

	double db1;
	scanf("%lf", &db1);
	*/
	system("pause");

	printf("----------------------------\n");
	printf("[03] 다음 코드들의 출력 결과는 무엇입니까? \n");
	printf("----------------------------\n");

	/*
	01. char ch = 98 ;
    printf( " %d ", ch ); // 98

	02. unsigned char ch = 256 ;
		printf( " %d ", ch );

	03. char ch = 'A' ;
		printf( " %d ", ch );

	04. char ch = 1000 ;
		printf( " %c ", ch );

	05. unsigned int N = -1 ;
		printf( " %u, %d ", N, N );

	06. int N = -1 ;
		printf( " %u, %d ", N, N );

	07. long nBig = 1000000;
		short nSmall = nBig;
		printf( " %d, %d ", nBig, nSmall );

	08. int N = 2109876543 ;
		printf( " %d ", N );

	09. float fReal = 123.123456789123456789;
		printf( " %f, %.10f ", fReal, fReal );

	10. double fReal = 123.123456789123456789 ;
		printf( " %f, %.10f ", fReal, fReal );
	
	*/
	return 0; // 0: 정상 종료 - normal termination
}
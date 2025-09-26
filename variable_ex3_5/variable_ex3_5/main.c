#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void) {
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("------------변수 출력하기-----------\n");
	printf("float변수의 값: %.20f\n", ft);		// float 유효자릿수 7자리
	printf("double변수의 값:  %.20f\n", db);	// double 유효자릿수 15자리

	printf("------------유효자리까지만 출력 <float.h> 매크로 사용-----------\n");
	printf("float변수의 값: %.*f\n", FLT_DIG, ft);		// float 유효자릿수 7자리까지 출력
	printf("double변수의 값:  %.*f\n", DBL_DIG, db);	// double 유효자릿수 15자리까지 출력

	printf("-------자료형별 표현 가능한 최소/최대값 출력 <limits.h> 매크로 사용-----------\n");
	printf("short형 범위: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("int형 범위: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("long형 범위: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("long long형 범위: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned short형 범위: %u ~ %u\n", 0, USHRT_MAX);
	printf("unsigned int형 범위: %u ~ %u\n", 0, UINT_MAX);
	printf("unsigned long형 범위: %lu ~ %lu\n", 0, ULONG_MAX);
	printf("unsigned long long형 범위: %llu ~ %llu\n", 0, ULLONG_MAX);
	
	printf("------------short int si;처럼 자료형을 동시에 써도 무방하며 이는 short si;와 같은 의미-----------\n");
	printf("------------long long int L;도 long long L;과 같다.-----------\n");
	short int si = SHRT_MAX; // short si = SHRT_MAX 와 같다.
	printf("short int si: %d\n", si);
	printf("------------중첩 자료형 선언은 가독성을 위해 잘 쓰이지 않고, 일반적으로 int가 생략된 형태를 많이 씀-----------\n");

	return 0;
}
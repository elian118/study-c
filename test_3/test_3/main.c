#include <stdio.h>

int main(void) {
	int N = 0;
	int L = 1;
	int K = 2;
	int M = 3;
	int X = 0;
	double m = 0;
	double PAI = 3.14;
	double ROOT = 1.41;
	
	if (N < 0) 
		N = 0;
	
	
	if (N % 5 > 0) 
		N = (N % 5) * 5;
	

	if (N % 2 == 0)	printf("짝수\n");
	else printf("홀수\n");

	if (0 <= N && N <= 10) N = 0;

	if (N % 2 == 0)	N++, printf("홀수\n");

	if (N == K)	N = M;
	else N = L;

	if (N != M) N = M;
	
	// switch 문에서 인자와 case 값은 상수여야 한다.
	switch (X) {
		case 3:
			m = PAI;
			break;
		case 1:
			m = ROOT;
			break;
	}

	switch (N % 2 == 0) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}

	switch (0 <= N && N <= 10) {
		case 0:
			break;
		case 1:
			break;
		default:
			break;
	}

	switch (1) {
		case 0: 		
			break;
		case 1: 		
			break;
	}

	switch (N) {
		case 0:
			break;
		case 1:
			break;
		default:
			break;
	}

	switch (N % 2) {
		case 0:
			break;
		case 1:
			break;
	}

	switch (N >- 0 && N < 10) {
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			printf("0 <= N < 10\n");
			break;
		default:
			printf("N >= 10\n");
			break;
	}

	switch (N) {
		case 3: printf("3\n"); break;
		case 2: printf("2\n"); break;
		case 1: printf("1\n"); break;
	}

	return 0;
}
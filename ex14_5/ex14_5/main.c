#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printIdxScore(int score[][3][4]); // 포인터를 인자로 받는다. score[] == (*score)

int main(void) {
	int score[2][3][4] = {
		{ {72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90} },
		{ {66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75} }
	};

	int i, j, k;

	for (i = 0; i < 2; i++) {
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	printIdxScore(score); // score 변수 자체가 이미 배열을 가리키는 포인터가 되므로 &를 붙이면 안 됨

	return 0;
}

void printIdxScore(int score[][3][4]) { // void printScore(int (*score)[3][4])
	int i, j, k;
	printf("확인할 score[2][3][4] 점수의 인덱스를 입력하세요 (예: 1 1 2) : ");
	scanf("%d %d %d", &i, &j, &k);
	printf("위치: score[%d][%d][%d]\n", i, j, k);
	printf("점수: %d점(%d반)\n", score[i][j][k], i + 1);
}

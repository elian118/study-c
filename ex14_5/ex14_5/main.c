#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printIdxScore(int score[][3][4]); // �����͸� ���ڷ� �޴´�. score[] == (*score)

int main(void) {
	int score[2][3][4] = {
		{ {72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90} },
		{ {66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75} }
	};

	int i, j, k;

	for (i = 0; i < 2; i++) {
		printf("%d�� ����...\n", i + 1);
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	printIdxScore(score); // score ���� ��ü�� �̹� �迭�� ����Ű�� �����Ͱ� �ǹǷ� &�� ���̸� �� ��

	return 0;
}

void printIdxScore(int score[][3][4]) { // void printScore(int (*score)[3][4])
	int i, j, k;
	printf("Ȯ���� score[2][3][4] ������ �ε����� �Է��ϼ��� (��: 1 1 2) : ");
	scanf("%d %d %d", &i, &j, &k);
	printf("��ġ: score[%d][%d][%d]\n", i, j, k);
	printf("����: %d��(%d��)\n", score[i][j][k], i + 1);
}

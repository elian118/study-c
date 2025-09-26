#include <stdio.h>

void print_arr(int* pa);

int main(void) {
	int arr[5] = { 10, 20, 30, 40, 50 };
	printf("%d\n ", &arr[0]);
	printf("%d\n ", arr);
	printf("arr == &arr[0]: %d\n ", arr == &arr[0]);
	print_arr(arr); // �迭���� ���ڷ� ���� �� �迭 ù��° ����� �ּ�(&arr[0])�� ���޵�

	return 0;
}

void print_arr(int *pa) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]); // �ּҰ��� �̿��Ͽ� �迭 ��� ���� - pa[i]�� *(pa + i)�� ����(�ξ� ��)
	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%d ", &pa[i]); // �迭 ����� �ּ� ��� - int���̶� 4�� ����
	}
}
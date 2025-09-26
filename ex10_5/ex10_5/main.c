#include <stdio.h>

void print_arr(int* pa);

int main(void) {
	int arr[5] = { 10, 20, 30, 40, 50 };
	printf("%d\n ", &arr[0]);
	printf("%d\n ", arr);
	printf("arr == &arr[0]: %d\n ", arr == &arr[0]);
	print_arr(arr); // 배열명을 인자로 전달 → 배열 첫번째 요소의 주소(&arr[0])가 전달됨

	return 0;
}

void print_arr(int *pa) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]); // 주소값을 이용하여 배열 요소 접근 - pa[i]는 *(pa + i)와 동일(훨씬 편리)
	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%d ", &pa[i]); // 배열 요소의 주소 출력 - int형이라 4씩 증가
	}
}
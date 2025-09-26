#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct num_ch {
	int num;
	char ch[10];
};

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int compare_struct_num(const void* a, const void* b) {
	return ((struct num_ch*)a)->num - ((struct num_ch*)b)->num;
}

int compare_struct_ch(const void* a, const void* b) {
	return strcmp(((struct num_ch*)a)->ch, ((struct num_ch*)b)->ch);
}


void main() {

	struct num_ch data[5];
	int i;
	int a[10] = { 8,7,6,9,10,1,5,4,3,2 };

	//배열안에 있는 숫자 정렬
	qsort(a, sizeof(a) / sizeof(int), sizeof(int), compare);

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}


	data[0].num = 10;
	data[1].num = 5;
	data[2].num = 6;
	data[3].num = 2;
	data[4].num = 8;

	strcpy(data[0].ch, "aaaaa");
	strcpy(data[1].ch, "ccccc");
	strcpy(data[2].ch, "bbbbb");
	strcpy(data[3].ch, "zzzzz");
	strcpy(data[4].ch, "ttttt");

	//구조체 안에 있는 integer정렬
	qsort(data, sizeof(data) / sizeof(struct num_ch), sizeof(struct num_ch), compare_struct_num);

	for (i = 0; i < 5; i++) {
		printf("\ndata[%d] : %d,%s", i, data[i].num, data[i].ch);
	}

	//구조체 안에 있는 스트링 정렬
	qsort(data, sizeof(data) / sizeof(struct num_ch), sizeof(struct num_ch), compare_struct_ch);
	for (i = 0; i < 5; i++) {
		printf("\ndata[%d] : %d,%s", i, data[i].num, data[i].ch);
	}
}


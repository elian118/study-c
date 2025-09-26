#include <stdio.h>

int biggest(int a, int b, int c);

int main(void) {
	int a = 10, b = 20, c = 30, res;

	res = biggest(c, b, a);
	printf("Å« °ª: %d\n", res);	

	return 0;
}

biggest(int a, int b, int c) {
	return (a > b)
		? a > c ? a : c
		: b > c ? b : c;
}
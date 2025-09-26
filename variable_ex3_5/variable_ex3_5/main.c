#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void) {
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("------------���� ����ϱ�-----------\n");
	printf("float������ ��: %.20f\n", ft);		// float ��ȿ�ڸ��� 7�ڸ�
	printf("double������ ��:  %.20f\n", db);	// double ��ȿ�ڸ��� 15�ڸ�

	printf("------------��ȿ�ڸ������� ��� <float.h> ��ũ�� ���-----------\n");
	printf("float������ ��: %.*f\n", FLT_DIG, ft);		// float ��ȿ�ڸ��� 7�ڸ����� ���
	printf("double������ ��:  %.*f\n", DBL_DIG, db);	// double ��ȿ�ڸ��� 15�ڸ����� ���

	printf("-------�ڷ����� ǥ�� ������ �ּ�/�ִ밪 ��� <limits.h> ��ũ�� ���-----------\n");
	printf("short�� ����: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("int�� ����: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("long�� ����: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("long long�� ����: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned short�� ����: %u ~ %u\n", 0, USHRT_MAX);
	printf("unsigned int�� ����: %u ~ %u\n", 0, UINT_MAX);
	printf("unsigned long�� ����: %lu ~ %lu\n", 0, ULONG_MAX);
	printf("unsigned long long�� ����: %llu ~ %llu\n", 0, ULLONG_MAX);
	
	printf("------------short int si;ó�� �ڷ����� ���ÿ� �ᵵ �����ϸ� �̴� short si;�� ���� �ǹ�-----------\n");
	printf("------------long long int L;�� long long L;�� ����.-----------\n");
	short int si = SHRT_MAX; // short si = SHRT_MAX �� ����.
	printf("short int si: %d\n", si);
	printf("------------��ø �ڷ��� ������ �������� ���� �� ������ �ʰ�, �Ϲ������� int�� ������ ���¸� ���� ��-----------\n");

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Hello World\n");
	printf("----------------------------\n");
	printf("[01] �߸��� �κ��� ã�Ƽ� ���� ������.\n");
	printf("----------------------------\n");

	printf("1.1) %d %d %d\n", 5, 10, 20); // %d: ������ - decimal(10����)
	printf("1.2) %c %s\n", 'A', "32767");
	/*
		����  : 'a' 1byte
		���ڿ�: "abc" 1byte * 3 + 1byte('\0') �� \0: null ����(���ڿ��� ��)
	*/
	printf("1.3) %d, %d, %d�� %d�� ���\n", 1, 2, 3, 6);
	printf("1.4) %d, %.2lf\n", 127, 1.05);
	printf("1.5) printf()\n");
	printf("1.6) %d \n", 77);
	printf("1.7) %s\n", "256�� '2�� 8��'�Դϴ�."); // ' ��� " ������ \�� �տ� �ٿ��ش� �� printf("1.7) %s\n", "256�� \"2�� 8��\"�Դϴ�.");
	printf("1.8) %5d\n", 127); // 5ĭ Ȯ�� �� ������ ����
	printf("1.9) %s\n", "127");
	printf("1.10) ���� �̸��� �豤ȸ�Դϴ�.\n");
	printf("1.11) %c %c %c\n", 'A', 'B', 'C');
	printf("1.12) %s%s%s\n", "��", "��", "ȸ"); // �ѱ��� 2byte �� %c�� ��� �Ұ�
	printf("1.13) %s�� ���� �����ϴ� ���ڴ� %d�Դϴ�.\n", "�豤ȸ", 3);
	printf("1.14) 100��¥�� �������� ���� �������?.\n");
	printf("1.15) Hello World !\n");
	system("pause");

	printf("----------------------------\n");
	printf("[02] scanf �Լ��� ����� �Է� �ڵ��Դϴ�. �߸��� �κ��� ã������.\n");
	printf("----------------------------\n");
	/*
	int N1;
	scanf("%d ", &N1); // &N1: N1�� �ּ�(�޸� ����) - address of N1

	int *N2;
	scanf("%d", N2); // *N2: ������ ����(�ּҸ� �����ϴ� ����) �� ������ �������� &�� scanf �Ű������� ���� �� ���� scanf("%d", &N2);
	
	char ch;
	scanf("%c", &ch);

	char ch1, ch2;
	scanf("%c", &ch1);
	scanf("%c", &ch2);

	float N;
	scanf(" ���� : %f ", &N);

	char ch;
	int N;
	scanf("%c", &ch);
	scanf("%d", &N);

	// scanf("%d", 10); // ���̱� ������ �Ұ���(Locator value �� �ƴ�)
	int N;
	scanf("%d ", N);

	// 07. scanf( " ���� : %c ", 'A' ); // ���� ���ڿ��� ���� �ʴ� �� ����
	char A;
	scanf("%c", A);

	double db1;
	scanf("%lf", &db1);
	*/
	system("pause");

	printf("----------------------------\n");
	printf("[03] ���� �ڵ���� ��� ����� �����Դϱ�? \n");
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
	return 0; // 0: ���� ���� - normal termination
}
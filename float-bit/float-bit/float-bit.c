
#include <stdio.h>

char* itobs(int, char*);

int main(void)
{
	char bstr1[8 * sizeof(int) + 4];
	char bstr2[8 * sizeof(int) + 4];

	unsigned int upfloat = 0, downfloat = 0;
	unsigned int* pint;

	float b = -1.0, * pfloat;

	printf("\n Size of int is \" %d \" \n\n", sizeof(int));
	printf("\n Size of unsigned int is \" %d \" \n\n", sizeof(unsigned int));
	printf("\n Size of float is \" %d \" \n\n", sizeof(float));

	while (printf("\n Enter an integer (0 to quit): ") && scanf("%f", &b) && !(b == 0))
	{

		pfloat = &b;

		pint = pfloat;
		upfloat = *pint;

		pint = pint + 1;
		downfloat = *pint;

		itobs(upfloat, bstr1);
		itobs(downfloat, bstr2);

		//printf("\n float is %f  \n upfloat   %s \n downfloat %s \n \n", b, bstr1, bstr2);
		printf("\n float is %f  \n binary form float is %s \n \n", b, bstr1);
	}

	puts("Done");
	return 0;
}

char* itobs(int n, char* bs)
{
	int i;
	static int size = 8 * sizeof(int);
	for (i = size - 1; i >= 0; i--, n >>= 1)
	{
		bs[i] = (01 & n) + '0';
	}

	bs[size] = '\0';
	return bs;
}


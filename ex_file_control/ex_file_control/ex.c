#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX 3
#define POINT_MAX 3

void main(void) {
	FILE* fp;
	int i = 0, j = 0, k = 0;
	int temp = 0;
	int sum = 0;
	int avg = 0;
	char string[25];

	int JUMSU[MAX][POINT_MAX + 2] = { 0 };  // +2 for avg and sum

	int after_fileread[MAX][POINT_MAX + 2] = { 0 };

	int temp_array[POINT_MAX + 2] = { 0 };


	printf("\n Input %d Man's point ", MAX);
	printf("\n They Have Math, Korean, Geometry point each ");

	// input jumsu 3 times per man
	for (i = 0; i < MAX; i++) {
		printf("\n [ %d ] th man input \n", i);

		printf("\t Math = ");
		scanf("%d", &temp);
		JUMSU[i][0] = temp;

		printf("\t Korean = ");
		scanf("%d", &temp);
		JUMSU[i][1] = temp;

		printf("\t Geometry = ");
		scanf("%d", &temp);
		JUMSU[i][2] = temp;
	}


	printf("\n\n make file or press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}


	// file creation
	if ((fp = fopen("c:\\a\\sortandfile.txt", "wb+")) == NULL) {
		printf("\n Disk Error !");
		exit(1);
	}


	printf("\n\n write file or press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}


	// file write
	for (i = 0; i < MAX; i++)
		for (j = 0; j < POINT_MAX + 2; j++) {
			_putw(JUMSU[i][j], fp);
		}

	// file close
	fclose(fp);


	printf("\n\n read file or press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}


	// file read
	if ((fp = fopen("c:\\a\\sortandfile.txt", "ab+")) == NULL) {
		printf("\nFile reading error!");
		return;
	}

	fread(after_fileread, sizeof(int), MAX * (POINT_MAX + 2), fp);

	fclose(fp);


	printf("\n\n print array or press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}


	// print read file
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < POINT_MAX + 2; j++) {
			printf("\n [ %d ]' th man point =  %d", i, after_fileread[i][j]);
		}
		printf("\n\n");
	}


	printf("\n\n calculate sum and avg or press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}


	// calculate sum per man
	for (i = 0; i < MAX; i++) {
		sum = 0;
		for (j = 0; j < POINT_MAX; j++) {
			sum = sum + after_fileread[i][j];
		}

		after_fileread[i][POINT_MAX] = sum;

		printf("\n [ %d ] th sum is %d ", i, sum);
	}


	printf("\n\n next or press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}



	// calculate average per man
	printf("\n calculate average per man \n ");
	for (i = 0; i < MAX; i++) {
		sum = 0;
		for (j = 0; j < POINT_MAX; j++) {
			sum = sum + after_fileread[i][j];
		}

		avg = sum / MAX;
		after_fileread[i][POINT_MAX + 1] = avg;

		printf("\n [ %d ] th sum is %d ", i, sum);
	}


	// print after calculate sum and avg
	printf("\n print after calculate sum and avg \n ");
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < POINT_MAX + 2; j++)
		{
			printf("\n [ %d ]' th man point =  %d", i, after_fileread[i][j]);
		}
		printf("\n\n");

		printf("\n\n print next man or press '0' to exit \n\n");
		if (getch() == '0')
		{
			exit(0);
		}
	}

	// sort array  using bubble sort
	printf("\n sorting \n ");
	for (i = 0; i < MAX; i++) {
		printf("\n loop = %d ", i);
		for (k = 0; k < MAX; k++) {
			printf(" [ %d ] ", after_fileread[k][POINT_MAX]);
		}

		for (j = 0; j < MAX - 1; j++) {
			if (after_fileread[j][POINT_MAX] < after_fileread[j + 1][POINT_MAX]) {
				for (k = 0; k < POINT_MAX + 2; k++) {
					temp_array[k] = after_fileread[j + 1][k];
					after_fileread[j + 1][k] = after_fileread[j][k];
					after_fileread[j][k] = temp_array[k];
				}
			}
		}

		if (getch() == '0') {
			exit(0);
		}
	}

	// print after sorting
	printf("\n\n print after sorting\n");
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < POINT_MAX + 2; j++) {
			printf("\n [ %d ]' th man point =  %d", i, after_fileread[i][j]);
		}
		printf("\n\n");
	}

	// saving total result's int to char convert needed
	// file creation
	if ((fp = fopen("c:\\a\\sorted_file.txt", "ab+")) == NULL) {
		printf("\n Disk Error !");
		exit(1);
	}

	// file write
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < POINT_MAX + 2; j++) {
			_itoa(after_fileread[i][j], string, 10);
			fputs(string, fp);
			fputs(" ", fp);
		}
		string[0] = 0x0D;
		string[1] = 0x0A;
		string[2] = '\0';
		fputs(string, fp);
	}

	fputs(string, fp);
	fputs("sorted and stored", fp);
	fputs(string, fp);

	// file close
	fclose(fp);



	printf("\n\n press '0' to exit \n\n");
	if (getch() == '0') {
		exit(0);
	}

}



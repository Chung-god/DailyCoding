#include <stdio.h>

int main() {
	/*1090 
	int a, r, n, i;
	long long int num;
	scanf_s("%d%d%d", &a, &r, &n);
	num = a;

	for (i = 1; i < n; i++) {
		num *= (long long int)r;
	}
	printf("%lld", num);*/


	/*1092
	int a, m, d, n;
	int i;
	long long int num;
	scanf_s("%d%d%d%d", &a, &m, &d, &n);
	num = a;
	for (i = 1; i < n; i++) {
		num = (long long int)num * m + d;
	}
	printf("%lld", num);*/

	/*1092
	int a, b, c;
	int i;
	scanf_s("%d%d%d", &a, &b, &c);
	unsigned int day = 1;
	while (day % a != 0 || day % b != 0 || day % c != 0)
		day++;
	printf("%d", day);*/

	/* 1094
	int array[23] = {0,};
	int n;
	int num;
	int i;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num);
		++array[num-1];
	}

	for (i = 0; i < sizeof(array) / sizeof(int); i++) {
		printf("%d ", array[i]);
	}*/

	/*int n,num,i;
	scanf_s("%d", &n);
	int array[10000] = { NULL, };
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num);
		array[i] = num;
		printf("%d ", array[i]);
	}
	printf("\n");

	for (i = n - 1; i >= 0; i--) {
		printf("%d ", array[i]);
	}*/

	/*1096 
	int n, num, i;
	int min = 23;
	scanf_s("%d", &n);
	int array[10000] = { NULL, };
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num);
		array[i] = num;
	}

	for (i = 0; i < n; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	printf("%d", min);*/

	//1097
	//int board[20][20] = { 0, };
	//int n, x, y, i, j;
	//scanf_s("%d", &n);
	//for (i = 0; i < n; i++) {
	//	scanf_s("%d %d", &x, &y);
	//	board[x-1][y-1] = 1;
	//}

	//for (i = 0; i < 19; i++) {
	//	for (j = 0; j < 19; j++) {
	//		printf("%d ", board[i][j]);
	//	}
	//	printf("\n");
	//}


	//1097 십자뒤집기
	//int  i, j, x, y, n;
	//int a[20][20] = {};
	//for (i = 0; i < 19; i++)
	//	for (j = 0; j < 19; j++)
	//		scanf("%d", &a[i][j]);

	//scanf("%d", &n);//좌표 개수 받기

	//for (i = 1; i <= n; i++) {
	//	scanf("%d %d", &x, &y);
	//	for (j = 0; j < 19; j++) {
	//		if (a[x - 1][j] == 0) a[x - 1][j] = 1;
	//		else a[x - 1][j] = 0;
	//	}
	//	for (j = 0; j < 19; j++) {
	//		if (a[j][y - 1] == 0) a[j][y - 1] = 1;
	//		else a[j][y - 1] = 0;
	//	}
	//}

	//for (i = 0; i < 19; i++) {
	//	for (j = 0; j < 19; j++) {
	//		printf("%d ", a[i][j]);
	//	}
	//	printf("\n");
	//}
}
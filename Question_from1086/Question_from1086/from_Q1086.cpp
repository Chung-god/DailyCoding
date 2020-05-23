#include <stdio.h>

int main() {
	/*1086 Calculate Pixel
	int w, h, b;
	scanf_s("%d%d%d", &w, &h, &b);
	double sum = 1;
	sum = (unsigned int)(w * h * b);
	printf("%.2f MB", sum / 1024 / 1024 / 8);*/

	/*1087
	int i;
	int num,sum = 0;
	scanf_s("%d", &num);

	for (i = 1; sum < num; i++) {
		sum += i;
	}
	printf("%d", sum);*/

	/*1088
	int i;
	int num;
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		if (i % 3 != 0) {
			printf("%d ", i);
		}
	}*/

	/*1089
	int a, d, n, i;
	scanf_s("%d%d%d", &a, &d, &n);
	int num = a;
	for (i = 0; i < n-1; i++) {
		num += d;
	}
	printf("%d", num);*/
}
#include <stdio.h>

int main() {
	int pasta[3];
	int juice[2];
	int i = 0;
	scanf_s("%d%d%d", pasta, pasta + 1, pasta + 2);
	scanf_s("%d%d", juice, juice + 1);


	int minP = 2000, minJ=2000;
	while (i < 3) {
		if (pasta[i] < minP)
			minP = pasta[i];
		if (i == 2)
			break;
		if (juice[i] < minJ)
			minJ = juice[i];
		i++;
	}
	
	printf("%.1f",(float)(minP + minJ) * 1.1);
}
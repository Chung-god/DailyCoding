#include <stdio.h>

int main() {
	char word[30];
	scanf("%s", word);
	int i;
	for (i = 0;word[i] != '\0'; i++) {
		printf("\'%c\'\n", word[i]);
	}
}

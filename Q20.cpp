#include <stdio.h>

int main(){
	/*int f,b;
	scanf("%d-%d",&f,&b);
	printf("%.6d%.7d",f,b);
	*/
	
	/*
	char data[50]="";
	scanf("%s",data);
	printf("%s",data);
	*/
	
	char data[2001];
	fgets(data,2000,stdin);
	printf("%s",data);
}

// CodeUp3301.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// Greedy Algorithm
// code by HyunChung Park
// Date : 2020.05.27

#include <stdio.h>

int main()
{
    int money,i = 0;
    int num = 0;
    scanf_s("%d", &money);//금액을 받아옴
    int pocket[8] = { 50000,10000,5000,1000,500,100,50,10 };//화폐의 종류

    while(i < 8) {//화폐 다 사용
        if (money >= pocket[i]) {//최대 금액의 화폐를 사용
            money -= pocket[i];//사용 금액 총액에서 제외
            num++;//화폐사용 횟수 증가
        }
        else {
            i++;//화폐종류 바꿈
        }
    }
    printf("%d", num);
}

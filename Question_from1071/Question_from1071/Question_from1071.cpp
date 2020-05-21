// Question_from1071.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    /*1071
    int num;
    scanf("%d", &num);
    while(num!=0){
        printf("%d\n", num);
        scanf("%d", &num);
    } */

    //1072
    //    int n,temp;
    //    scanf("%d", &n);
    //    
    //reget:
    //    scanf("%d", &temp);
    //    printf("%d\n", temp);
    //    if (--n != 0) goto reget;

       /*1073
       int n;
        scanf("%d", &n);
        while (n != 0) {
            printf("%d\n", n);
            scanf("%d", &n);
        }*/

        /*1075
        int n;
        scanf_s("%d", &n);
        while (n > 0) {
            printf("%d\n", n--);
        }*/

        /*1076
        int n;
        scanf_s("%d", &n);
        while (n > 0) {
            printf("%d\n", --n);
        }*/

    /*1076
    char c;
    char temp= 'a';
    scanf_s("%c", &c);
    do {
        printf("%c ", temp++);

    } while (temp <= c);*/
   
    /*1077
    int n,i;
    scanf_s("%d", &n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", i);
    }*/
    
   /*1078 only even sum 
   int n, i;
    scanf_s("%d", &n);
    int sum = 0;
    for (i = 0;i <= n; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    printf("%d", sum);*/

    /*1079 print char until input 'q'
    char c;
    scanf_s("%c", &c);
    while (c != 'q') {
        if(c!= ' ' )
            printf("%c\n", c);
        scanf_s("%c",&c);
    }
    printf("q\n");*/


    /*1080 sum 
    int sum=0, num=0;
    int i=1;
    scanf_s("%d", &num);
    while (sum < num) {
        sum += i;
       
        i++;
    }
    printf("%d", i-1);*/

}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

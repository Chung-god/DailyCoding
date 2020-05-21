// Question_from1061.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*1061 or
    int a, b;
    scanf_s("%d %d", &a, &b);
    printf("%d", a | b);
    */
    /*1062 xor
    int a, b;
    scanf_s("%d %d", &a, &b);
    printf("%d", a ^ b);
    */

    /* Ternary operator
    int a, b,c;
    scanf_s("%d %d %d", &a, &b,&c);
    printf("%d", (a < b ? a:b) < c ? ( a < b ? a : b) : c);
    */

    /*1065
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a % 2 == 0)
        printf("%d\n", a);
    if (b % 2 == 0)
        printf("%d\n", b);
    if (c % 2 == 0)
        printf("%d\n", c);
    */

    /* even or odd
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    if (b % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    if (c % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    */

    /*
    int a;
    scanf_s("%d", &a);
    
    if (a >= 0) {
        printf("plus\n");
        if (a % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    else {
        printf("minus\n");
        if (a % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    */

    /* 1068
    int a;
    scanf_s("%d", &a);
    if (a < 40)
        printf("D");
    else if (a < 70)
        printf("C");
    else if (a < 90)
        printf("B");
    else
        printf("A");
    */

    /*1069
    char c;
    scanf("%c", &c);
    if (c == 'A')
        printf("best!!!");
    else if (c == 'B')
        printf("good!!");
    else if (c == 'C')
        printf("run!");
    else if (c == 'D')
        printf("slowly~");
    else
        printf("what?");
    */

    /*1070 season
    int a;
    scanf("%d", &a);
    switch (a) {
    case 1:
    case 2:
    case 12:
        printf("winter");
        break;
    case 3:
    case 4:
    case 5:
        printf("spring");
        break;
    case 6:
    case 7:
    case 8:
        printf("summer");
        break;
    case 9:
    case 10:
    case 11:
        printf("fall");
        break;
    }
    */
    
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

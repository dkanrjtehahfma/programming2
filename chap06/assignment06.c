//
//  main.c
//  chap06-6
//
//  Created by 채명식 on 5/23/25.
//
/*
* 내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오.
 * 만일 잘못된 번호를 선택하면 올바른 번호를 선택할 까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
 * 즉, choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다.
 * choose_menu의 리턴 값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.
*작성자 : 채명식

* 날짜: 2025.05.22

 * 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int choose_menu(void)
{
    int menu;
    printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] ");
    scanf("%d", &menu);
    return menu;
}

void solve(void)
{

    int a = 0;

    while (1)
    {

        a = choose_menu();
        if (a == 1)
        {
            printf("파일 열기를 수행합니다.\n");
            continue;
        }
        else if (a == 2)
        {
            printf("파일 쓰기를 수행합니다.\n");
            continue;
        }
        else if (a == 3)
        {
            printf("파일 인쇄를 수행합니다.\n");
            continue;
        }
        else
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
    }



}


int main(void)
{
    solve();
    return 0;
}

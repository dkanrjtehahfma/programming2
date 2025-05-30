//
//  main.c
//  chap07-12
//
//  Created by 채명식 on 5/30/25.
//

/* 파일명: chap07-12

 * 내용: 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자.
 * 예매할 좌석수를 입력받아 빈 자리를 할당한다.
 * 예매할 때마다 각 좌석의 상태를 출력한다. O이면 예약 가능, X는 예매 불가를 의미한다. 더 이상 예매할 수 없으면 프로그램을 종료한다.
 * 작성자: 채명식

 * 날짜:  2025.05.28
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 
void solve(void)
{
    int seat[10] = { 0 };
    int input = 0;
    int remain = 10; // 예약 가능한 좌석 수

    while (seat[9] == 0)
    {
        printf("현재 좌석 : [ ");
        for (int i = 0; i < 10; i++)
        {
            if (seat[i] == 0)
            {
                printf("O ");
            }
            else
            {
                printf("X ");
            }
        }
        printf("]\n");

        printf("예매할 좌석수? ");
        scanf("%d", &input);

        for (int i = 0; i < 10; i++)
        {
            if (seat[i] == 0 && input > 0)
            {
                seat[i] = 1; // 좌석 예약
                printf("%d ", i + 1);
                input--;
            }
        }
        printf(" 번 좌석을 예매했습니다.\n");
    }
}


int main(void)
{
    solve();
    return 0;
}

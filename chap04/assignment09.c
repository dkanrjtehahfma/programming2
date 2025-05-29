//
//  main.c
//  chap0....4
//
//  Created by 채명식 on 4/14/25.
//

/*파일명 : chap04-09
 * 내용 : 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
 * 작성자 : 채명식
 * 날짜 : 4/10
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment(void)
{
    int a;
    printf("재생시간(초)?");
    scanf("%d", &a);
    int hour = a / 3600;
    int min = (a % 3600) / 60;
    int sec = a % 60;
    printf("재생시간은 %d시간 %d분 %d초 입니다.", hour , min, sec);
    
}
int main(void)
{
    assignment();
    return 0;
}

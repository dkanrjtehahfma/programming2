//
//  main.c
//  chap06-2
//
//  Created by 채명식 on 5/23/25.
//
/* 파일명: ProAss02.c

 * 내용: 한 변의 길이를 매개변수로 전달받아 정사각형의 넓이를 구하는  get_area_of_square 함수를 작성하시오.
 * get_area_of_square 함수를 이용해서 입력받은 한 변의 길이로 정사각형의 넓이를 구하는 프로그램을 작성하시오.
 * 작성자: 채명식

 * 날짜: 2025.05.22

 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float get_area_of_square(float x)
{
    return x * x;
}

void solve(void)
{
    float x = 0.0;
    printf("한 변의 길이? ");
    scanf("%f", &x);
    printf("정사각형의 넓이: %f", get_area_of_square(x));
}


int main(void)
{
    solve();
    return 0;
}

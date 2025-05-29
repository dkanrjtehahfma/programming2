//
//  main.c
//  chap06-3
//
//  Created by 채명식 on 5/23/25.
//

/* 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오.
 distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선거리를 구하는 프로그램을 작성하시오.
 * 작성자: 채명식

 * 날짜: 2025.05.22

 * 버전: v1.0
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2)
{
    float result = 0;
    return result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));


}

void solve(void)
{
    float x1, y1, x2, y2 = 0;

    printf("직선의  시작점 좌표?");
    scanf("%f %f", &x1, &y1);
    printf("직선의  끝점 좌표?");
    scanf("%f %f", &x2, &y2);
    printf("(%.0f, %.0f)~(%.0f, %.0f) 직선의 길이 : %f", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}


int main(void)
{
    solve();
    return 0;
}

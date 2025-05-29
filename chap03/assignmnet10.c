//
//  main.c
//  chap0000003
//
//  Created by 채명식 on 4/8/25.
//

/*파일명 : chap03-10
 * 내용 : 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
 * 작성자 : 채명식
 * 날짜 : 4/7
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignmnet(void)
{
    double a;
    printf("USD?");
    scanf("%lf", &a);
    double b;
    printf("원/달러 환율?");
    scanf("%lf", &b);
    printf("USD %.2lf=KRW %.2lf", a, a * b);
}

int main(void)
{
    assignmnet();
    return 0;
}


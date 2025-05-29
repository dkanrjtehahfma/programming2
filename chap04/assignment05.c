//
//  main.c
//  chap0..4
//
//  Created by 채명식 on 4/14/25.
//

/*
 파일명 : chap04-05
  * 내용 : 반지름과 높이를 정수로 입력받아 원기둥의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.
  * 작성자 : 채명식
  * 날짜 : 4/9
  * 버전 : v1.0
  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void assignmet(void)
{
    double PI= 3.141592;
    double a;
    printf("반지름 길이 ?");
    scanf("%lf", &a);
    printf("높이 ?");
    double b;
    scanf("%lf", &b);
    printf("원기둥의 부피:%.6f \n", PI * b * a * a);
    
}
int main(void)
{
    
    assignmet();
    return 0;
    
}

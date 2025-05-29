//
//  main.c
//  chap06-18
//
//  Created by 채명식 on 5/23/25.
//

/* 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
   0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오
 * 작성자: 채명식

 * 날짜:  2025.05.22
 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void divisors(int num)
{
    int count = 0;

    printf("%d의 약수: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("=> 총 %d개\n", count);
}


int solve(void)
{
    
    srand((unsigned int)time(NULL));
    divisors(rand() % 1000);
    divisors(rand() % 1000);
    divisors(rand() % 1000);


}


int main(void)
{
    solve();
    return 0;
}

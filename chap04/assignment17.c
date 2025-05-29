//
//  main.c
//  chap0...,4
//
//  Created by 채명식 on 4/16/25.
//


/*파일명 : chap04-17
 * 내용 : 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다. 7번째 비트만 1인 값, 15번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.
 * 작성자 : 채명식
 * 날짜 : 4/15
 * 버전 : v1.0
 */

#include <stdio.h>

void solve(void)
{
    unsigned int a = 1 << 7;
    unsigned int b = 1 << 15;
    unsigned int c = 1 << 23;
    unsigned int d = 1 << 31;
    
    
    printf("7번 비트만 1인 값: %08X %d\n", a, a);
    printf("15번 비트만 1인 값: %08X %d\n", b, b);
    printf("23번 비트만 1인 값: %08X %d\n", c, c);
    printf("31번 비트만 1인 값: %08X %d\n", d, d);
    
}

int main(void)
{
    solve();
    return 0;
}


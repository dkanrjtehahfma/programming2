//
//  main.c
//  chap0...4
//
//  Created by 채명식 on 4/14/25.
//

/*파일명 : chap04-08
 * 내용 : 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램으르 작성하시오. 이때 파이는 3.141592라고 하자.
 * 작성자 : 채명식
 * 날짜 : 4/10
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment(void)
{
    double a;
    double PI = 3.141592;
    printf("반지름의 길이?");
    scanf("%lf", &a);
    printf("구의 부피: %.6f \n", 4.0/3.0 * PI * a * a * a );
    
}
int main(void)
{
    assignment();
    return 0;
}

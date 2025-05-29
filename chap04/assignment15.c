//
//  main.c
//  chap0.....4
//
//  Created by 채명식 on 4/14/25.
//

/*파일명 : chap04-15
 * 내용 : 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 떄는 매매기준율에 은해이의 환전수수료를 더해서 환율이 결정된다. 환전수수료는 환전우대율에 따라 달라진다. 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객마다 다르게 측정된다. 환전수수료율은 1.75%로 정해져 있다고 가정하고 워너-달러 매매기준율과 환정우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
 * 작성자 : 채명식
 * 날짜 : 4/10
 * 버전 : v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment(void)
{
    double a;
    
    printf("원/달러 매매기준율?");
    scanf("%lf", &a);
    
    double b;
    
    printf("환율우대율(0~100)?");
    scanf("%lf", &b);
    
    double c = a + (a * 1.75 / 100 * (1 - b / 100));
    printf("달러 살 때 환율은 %lf입니다.\n",c);
    
    double d;
    printf("구입한 달러(USD)?");
    scanf("%lf", &d);
    
    double e = d * c;
    printf("USD %.2f 살때 ==> KRW %.2f", d, e);
    
    return;
        
}
int main(void)
{
    assignment();
    return 0;
}


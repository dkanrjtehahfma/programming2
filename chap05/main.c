//
//  main.c
//  chap05-3
//
//  Created by 채명식 on 4/23/25.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment03(int a)
{
    int money50000;
    int money10000;
    int money5000;
    int money1000;
    int money100;
    int money10;
    
    money50000 = a / 50000;
    a = a % 50000;
    
    money10000 = a / 10000;
    a = a % 10000;
    
    money5000 = a / 5000;
    a = a % 5000;
    
    money1000 = a / 1000;
    a = a % 1000;
    
    money100 = a / 100;
    a = a % 100;
    
    money10 = a / 10;
    a = a % 10;
    
    printf("50000원 %d장\n", money50000);
    printf("10000원 %d장\n", money10000);
    printf("5000원 %d장\n", money5000);
    printf("1000원 %d장\n", money1000);
    printf("100원 %d장\n", money100);
    printf("10원 %d장\n", money10);
    
    return 0;
        
}

int test(void)
{
    int a = 0;
    
    a -= a % 10;
    
    printf("거스름돈?");
    scanf("%d", &a);
    
    printf("거스름돈 (10원)미만 절사:%d\n",a);
    
    assignment03(a);
    
    return 0;
}

int main(void)
{
    test();
    return 0;
}

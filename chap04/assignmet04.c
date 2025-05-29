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
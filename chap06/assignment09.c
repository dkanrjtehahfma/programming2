//
//  main.c
//  chap06-9
//
//  Created by 채명식 on 5/23/25.
//
/*
* 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 kae_rgb 함수를 정의하시오.
* 앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
* 작성자: 채명식

* 날짜: 2025.05.22

* 버전: v1.0

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int get_red(int rgb)
{
    int red = (rgb & 0xFF0000) >> 16;
    return 0xff ^ red;
}

int get_green(int rgb)
{
    int green = (rgb & 0x00FF00) >> 8;
    return 0xff ^ green;

}

int get_blue(int rgb)
{
    int blue = (rgb & 0x0000FF);
    return 0xff ^ blue;
}

void solve(void)
{
    int rgb = 0;
    printf("RGB 색상? ");
    scanf("%x", &rgb);
    printf("RGB %#x의 보색 : 0x%02x%02x%02x", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));
}


int main(void)
{
    solve();
    return 0;
}

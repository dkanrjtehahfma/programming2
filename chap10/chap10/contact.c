//
//  contact.c
//  chap10
//
//  Created by 채명식 on 5/28/25.
//
#include <string.h>
#include <stdio.h>
#include "contact.h"


//isEqualContact()
//반환값: 만약 같으면 1 (trure):반환 그렇지 않으면 0을 반환
//입력 비교할 두 contact 값

int isEqualContact(Contact a , Contact b)
{
   if (a.year == b.year && a.gender == b.gender &&
      strcmp(a.name, b.name) == 0 &&
      strcmp(a.phone, b.phone) == 0)
   {
      return 1;
   }
   return 0;
}

void printContact(Contact ct)
{
   //이름:000
   //전번:000000
   //성별:남 혹 여
   //연도:000

   printf("이름: %s \n", ct.name);
   printf("전번: %s \n", ct.phone);
   printf("성별: %s \n", ct.gender==MAN?"남자":"여자");
   printf("연도: %d \n", ct.year);

}
//
int isEqualContactPtr(const Contact * a, const Contact *b)
{
   if (a->year == b ->year && a->gender == b->gender &&
      strcmp(a ->name, b->name) == 0 &&
      strcmp(a ->phone, b->phone) == 0)
   {
      return 1;
   }
   return 0;
}

void printContactPtr(const Contact *ct)
{

   printf("이름: %s \n", ct->name);
   printf("전번: %s \n", ct->phone);
   printf("성별: %s \n", ct->gender == MAN ? "남자" : "여자");
   printf("연도: %d \n", ct->year);

}


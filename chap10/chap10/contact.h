//
//  contact.h
//  chap10
//
//  Created by 채명식 on 5/28/25.
//
//#pragma once

#ifndef _CONTACT_H_1298475575
#define _CONTACT_H_1298475575

enum gender {MAN,WOMAN};
typedef enum gender EGender;

struct contact
{
   char name[24];
   char phone[24];
   EGender gender;
   int year;

};

typedef struct contact Contact;

int isEqualContact(Contact a, Contact b);
void prinfContact(Contact ct);
int isEqualContactPtr(const Contact* a, const Contact* b);
void printContactPtr(const Contact* ct);



#endif //_CONTACT_H_1298475575

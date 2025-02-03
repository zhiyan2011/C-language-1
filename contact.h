#ifndef CONTACT_H
#define CONTACT_H
#include <string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
//头文件里对文件进行声明
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2



// 类型声明
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;
// 封装一个通讯录
//静态版本
// typedef struct Contact
// {
//     PeoInfo data[MAX];
//     int count;//记录当前通讯录中人的个数
// }Contact;
// 动态版本
typedef struct Contact
{
    PeoInfo* data;
    int count;//记录当前通讯录中人的个数
    int capacity;//当前通讯录的容量
}Contact;

int InitContact(Contact* pc);
void AddContact(Contact* pc);
// show the contact list
void ShowContact(const Contact* pc);
// delet the contact list
void DelContact(Contact* pc);
// search the contact list
void SearchContact(Contact* pc);
// modify the contact        
void ModifyContact(Contact* pc);
// sort by name/age
void SortContact(Contact* pc);
void DestroyContact(Contact* pc);
void SaveContact(const Contact* pc);
void LoadContact(Contact* pc);











#endif // CONTACT_H
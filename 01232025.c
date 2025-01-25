#include <stdio.h>
// check 大端还是小端
//method 1 use union
// int check_sys()
// {
//     union U
//     {
//       char c;
//       int i;
//     }u;
//     int i =1;
//     return u.c;
// }
//method 2 
// int check_sys()
// {
//     int i = 1;
//     return *(char *)&i;
// }
// int main()
// {
//     int ret = check_sys();
//     if (ret==1)
//      printf("小端");
//     return 0;
// }
// 动态内存管理重点题目
#include<string.h>
#include<stdlib.h>

// void GetMemory(char* p)
// {
//     p = (char*)malloc(100);
// }
// // malloc 开辟了100bytes 位置给了空指针p， 出了这个函数，p销毁，但p开辟的空间还在， 这里存在内存泄漏， 
// void Test(void)
// {
//     char* str = NULL;
//     GetMemory(str);
//     strcpy(str,"hello world");//str 是null， 对其进行解引用，程序会崩溃
//     printf(str);
// }
// int main()
// {
//     Test();
//     return 0;
// }
//野指针
int* f1 (void)
{
    int x = 10;
    return (&x);
}
// 上面， 把x的地址返回后，但是x 除了这个函数就销毁了，使其变为野指针
int * f2(void)
{
    int* ptr;// ptr 没有初始化，指向一个随机地址
    *ptr = 10;// 这样一个随机的地址被改成10
    return ptr;// 返回的ptr也是随机的
}
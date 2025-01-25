#include<stdio.h>
//柔性数组
// c99 中结构体中的最后一个元素允许是未知大小的数组，这就叫做柔性数组成员

// struct S
// {
//     int n;
//     int arr[];
// };
// int main()
// {
//     int sz = sizeof(struct S);//计算柔性数组的大小，发现柔性数组的大小只计算柔性数组前的成员的大小，不计算柔性数组成员的大小。 
//如果创建带有柔性数组成员的结构体变量，不能使用struct S s, 这样创建的大小是不包含柔性数组成员的。 
//
//     printf("%d", sz);
//     return 0;
// }
// struct S
// {
//     int;
//     int a[0];// 柔性数组成员
// };
// //柔性数组特点：1. 结构体中的柔性数组成员前面必须至少有一个其他成员；2. sizeof返回的这种结构体的大小不包括柔性数组的内存；
// //3. 包含柔性数组成员的结构体，用malloc（）函数进行内存的动态分配，并且分配的内存应该大于结构体的大小。
// struct S
// {
//     int n;
//     int arr[];// 成员都在堆区上
// };
// int main()
// {
//     //柔性数组的使用
//     struct S* ps = malloc(sizeof (struct S ) + 40);
//     // malloc 开辟内存，前面4个给int n, 后面给到柔性数组
//     if (ps == NUll)
//     {
//         return 1;
//     }
//     ps-> n = 100;
//     int i = 0;
//     for (i =0;i < 10; i++)
//     {
//         ps-> arr[i] = i;
//     }
//     for (i = 0;i<10;i++)
//     {
//         printf("%d", ps->arr[i]);
//     }
//     // 柔性数组的可伸缩性的体现，是可以使用realloc 追加
//     struct S* ptr = relloc(ps, sizeof(ps, sizeof(struct S)+80));
//     if (ptr != Null)
//     {
//         ps = ptr;
//         ptr = NULL;// 这里ptr不能释放， 要不然ps会变成野指针
//     }
//     free (ps);
//     ps = NULL;
//     return 0;
// }
struct S 
{
    int n;
    int* arr;
};
int main()
{
    struct S* ps = (struct S*)malloc(sizeof(struct S));// malloc 开辟的内存放在堆区
    if(ps == NULL)
    {
        return 1;
    }
    ps->n = 100;
    ps->arr = (int*)malloc(40);
    if(ps->arr == NULL)
    {
        return 1;
    }
    int i  =0;
    for (i = 0; i<10;i++)
    {
        ps->arr[i] = i;
    }
    for (i = 0; i<10;i++)
    {
        printf("%d", ps->arr[i]);
    }
    //扩容
    int* ptr = (int*)relloc(ps->arr, 80);
    if(ptr == NULL)
    {
        return 1;
    }
    //释放
    free(ps->arr);//要先释放数组，再释放结构体，如果先释放结构体， arr 找不到了
    free(ps);
    ps = NULL;
    return 0;
}
//第二种方法，malloc 次数太多，增加内存碎片，连续的空间，有利于提高速度。
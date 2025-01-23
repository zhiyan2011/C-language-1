// int main()
// {
//     char* a[] ={"work","at", "alibaba"};
//     //a 变量类型是指针数组
//     //char* p = "abcdef", 这个表示把首元素的地址给到p
//     char** pa = a;//a表示首元素地址 char* *pa, 所以pa ++ 跳过一个char*
//     pa++;
//     printf("%s\n", *pa);
//     return 0;
// }
// int main()
// {
//     char* c[] = {"ENTER", "NEW","POINT","FIRST"};
//     // c 是指针数组，存放首元素地址
//     char** cp[] = {c + 3, c+2,c+1, c};// 
//     //c 是首元素地址， c + 3
//     char*** cpp = cp;//cp 是首元素地址
//     printf("%s\n", **++cpp);//++cpp 后cpp的值改变了
//     printf("%s\n", *-- * ++cpp + 3);//ER,先算++后，cpp 又改变了，然后解引用，然后-- ,再解引用，再加3
//     printf("%s\n", *cpp[-2] + 3);//cpp[-2]表示*（cpp-2), 这里cpp没动
//     printf("%s\n", cpp[-1][-1] + 1); //EW//*(*(cpp-1)-1) + 1
// }
// char* my_strcpy(char* dest, const char* src)
// {
//     assert(dest);
//     assert(src);
//     char* ret = dest;
// //   while (*src != '\0')
// //   {
// //     *dest = *src;
// //     dest++;
// //     src++;
// //   }
// while ((*dest++ = *src++))
// {
//     ;
// }
//   *dest = *src;
//   return ret;
// }

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[20] = {0};
//     my_strcpy(arr2,arr1);
//     printf("%s\n",arr2);
//     return 0;
// }
#include<stdio.h>
// char* my_strcat(char* dest, const char* src)
// {
//     // dest 的结尾； \0后面
//     // assert(src && dest);
//     char* ret = dest;
//     while(*dest != '\0')
//     {
//         dest++;
//     }
//     // dest++;
//     while ((*dest++ = *src++))
//     {
//         ;
//     }
//     return ret;
// }
// int main()
// {
//     char arr1[20] = "hello ";
//     // strcat(arr1, "world");
//     my_strcat(arr1, "world");
//     printf("%s\n",arr1);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
#include<assert.h>
// int my_strcmp(const char* str1, const char* str2)
// {
//    assert(str1 && str2);
// //    先通过对比照出不一样的字符，再进行比较
//     while (*str1 == *str2)
//     {
//        if (*str1 == '\0')
//        {
//         return 0;
//        }
//        str1++;
//        str2++;
//     }
//     // if (*str1 < *str2)
//     //    return -1;
//     // else
//     //    return 1;
//     return (*str1 - *str2);

// }
// int main()
// {
//     char arr1[20] = "zhangsan";
//     char arr2[] = "zhangsanfeng";
//     //compare these two string
//     my_strcmp(arr1, arr2);
//     return 0;
// }
// int main()
// {
//     char arr1[20] = "abcdef";
//     char arr2[] = "hello world";
//     strncpy(arr1,arr2,5);
//     printf("%s\n", arr1);
//     return 0;
// }
// char* my_strstr(const char* str1, const char* str2)
// {
//     assert(str1 && str2);
//     // 为了确保str1 str2不被更改，创建s1 s2两个指针
//     const char* s1 =str1;
//     const char* s2 = str2;
//     const char* p = s1;
//     while (*p)
//     {
//         s2 = str2;
//         s1 = p;
//         // 暴力查找字符
//         //KMP算法更简单
//         while (*s1 != '\0' && *s2 != '\0' && *s1== *s2)
//         {
//             s1++;
//             s2++;
//         }
//         if (*s2=='\0')
//         return (char*)p;
//         p++;
//     }
//     return NULL;
// }
// int main()
// {
//     char email[] = " locebiet";
//     char substr[] = "bite";
//     // char* ret = strstr(email, substr);
//     char* ret = my_strstr(email, substr);
//     if (ret == NULL)
//     printf("no result");
//     else
//      printf("%s\n", ret);
//     return 0;
// }
// void* my_memcpy(void * dest, const void* src, size_t num)
// {
//     assert(dest && src);
//     void* ret = dest;
//     while (num--)
//     {
//         //void* 不能直接解引用
//         *(char*)dest = *(char*)src;
//         dest = (char*)dest + 1;
//         src = (char*)src + 1;
//     }
//     return ret;
// }
// int main()
// {
//     int arr1[] = {1,2,3,4,5,6,7};
//     int arr2[20] = { 0 };
//     my_memcpy(arr2,arr1,28);
    //    int i = 0;
    //    for (i = 0; i<7;i++)
    //    {
    //     printf("%d ", arr2[i]);
    //    }
//     return 0;
// }
// void* my_memmove(void * dest, const void* src, size_t num)
// {
//     assert(dest && src);
//     void* ret = dest;
//     if(dest < src) 
//     {
//         //void* 不能直接解引用
//         // 从前往后copy
//         while (num--)
//         {
//         *(char*)dest = *(char*)src;
//         dest = (char*)dest + 1;
//         src = (char*)src + 1;
//         }
//     }
//     // 从后往前copy
//     else 
//     {
//         while (num--)
//         {
//             *((char*)dest + num) = *((char* )src + num);
//         }
//     }
//     return ret;
// }
// // 将arr1 中的2，3，4，5 拷贝到arr1中的3，4，5，6位置，得到 1，2，2，3，4，5，7，8，9，10
// //如果另建一个数组，则浪费空间
// // 所以采用不建新的数组的方法
// //数组在内存中从低到高存储
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int arr1[] = {1,2,3,4,5,6,7,8,9,10};

//     my_memmove(arr1 + 2, arr1 +1,16);
//      int i = 0;
//        for (i = 0; i<10;i++)
//        {
//         printf("%d ", arr1[i]);
//        }
//     return 0;
// }
#include<math.h>
// int chgnum(int m)
// {
//     int count =0;
//     int sum = 0;
//     int t = 0;
//   while (m)
//   {
//    if ((m%10)%2)
//    {
//       t = 1;
//    }
//    else 
//    {
//       t = 0;
//    }
//     m = m/10;
//    sum+= t* pow(10, count);
//    count ++;
//   }
//    return sum;
// }
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     int ret = chgnum(num);
//     printf("%d", ret);
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     int input = 0;
//     printf("pls enter a num:");
//     scanf("%d", &input);
//     for (i=0;i< input; i++)
//     {
//         int j = 0;
//        // print space
//         for (j=0; j< (input-(i+1));j++)
//         {
//             printf("  ");
//         }
//         // print *
//         for (j=0; j<i+1;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
int main()
{
    double price = 0;
    int month = 0;
    int day = 0;
    int flag = 0;
    scanf(" %lf %d %d %d", &price, &month,&day,&flag);
    if (month==11 && day==11)
    {
        price * 0.7 -flag *50;
    }
    if 
}
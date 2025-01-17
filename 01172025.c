#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int Add (int x, int y)
// {
//     return x+y;
// }
// int Sub (int x, int y)
// {
//     return x-y;
// }
// int Mul (int x, int y)
// {
//     return x*y;
// }
// int Div (int x, int y)
// {
//     return x/y;
// }
// // int main()
// // {
// //     // 函数名是函数指针
// //     // function pointer : int (*)(int, int)
   
// //    int (*arr[4])(int, int) = {Add, Sub, Mul, Div};// function pointer array
// //    int i = 0;
// //    for (i=0;i<4;i++)
// //    {
// //      int ret = arr[i](4,8);
// //      printf("%d\n", ret);
// //    }
// //     return 0;
// // }
// // calculator code
// void menu()
// {
//     printf("*********************\n");
//     printf("****1.add************\n");
//     printf("****2.sub************\n");
//     printf("****3.mul************\n");
//     printf("****4.div************\n");
//     printf("****0.exit***********\n");
//     printf("*********************\n");
// }
// // int main()
// // {
// //     int input = 0;
// //     int x = 0;
// //     int y = 0;
// //     int ret = 0;
// //     do
// //     {
// //         menu();
// //     printf("pls enter>");
// //     scanf("%d",&input);
// //          switch(input)
// //         {
// //             case 1:
// //             printf("pls enter two int number:");
// //             scanf("%d %d", &x,&y);
// //             ret = Add(x,y);
// //             printf("%d\n", ret);
// //             break;
// //             case 2:
// //             printf("pls enter two int number:");
// //             scanf("%d %d", &x,&y);
// //             ret = Sub(x,y);
// //             printf("%d\n", ret);
// //             break;
// //             case 3:
// //             printf("pls enter two int number:");
// //             scanf("%d %d", &x,&y);
// //             ret = Mul(x,y);
// //             printf("%d\n", ret);
// //             break;
// //             case 4:
// //             printf("pls enter two int number:");
// //             scanf("%d %d", &x,&y);
// //             ret = Div(x,y);
// //             printf("%d\n", ret);
// //             break;
// //             case 0:
// //             printf("exist game\n");
// //             break;
// //             default:
// //             printf("enter error\n");
// //             break;
// //         }
// //     } while (input);  
// // }
// // add more functions, how should we do 
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;
//     int ret = 0;
//     // 转移表
//     // function pointer array
//     int (*pfarr[5])(int, int) = {0, Add, Sub, Mul, Div};
//     do 
//     {
//         menu();
//         printf("pls choose>");
//         scanf("%d", &input);
//         if (input==0)
//         {
//             printf("exist the game\n");
//         }
//         else if (input>=1 && input <=4)
//         {
//             printf("pls two int number>>\n");
//             scanf("%d %d", &x, &y);
//            ret = pfarr[input] (x,y);
//            printf("%d\n", ret);
//         }
//         else
//         {
//             printf("enter error");
//         }
//     }while (input);
//     return 0;
// }

// void bubble_sort(int arr[], int sz)
// { 
//     int i =0;
//     for (i=0;i<sz-1;i++)
//     {
//         int flag = 1;
//         int j=0;
//         for (j=0;j< sz-1-i; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//              int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                flag = 0;
//             }
         
//         }
//         if (flag == 1)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//     int i = 0;
//     int sz = sizeof(arr)/ sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     for (i=0;i<sz;i++)
//     {
//     printf("%d ",arr[i]);

//     }
//     return 0;
// }
// how the ordered number don't need to sort, use flag.
// qsort function optimize: to sort any type data
// void qsort(void* base, // void show accepty any type data
//            size_t num, // data number to make sure compare how many data
//            size_t width, // how many bytes each number has to make sure what kind of data
//         int (*cmp)(const void* el, const void* e2));// compare function point to find campare function, e1 e2 to compare data

int cmp_int(const void *e1, const void *e2)//compare two 整型；void * accept any type of data
{
   return  *(int*)e1 - *(int*)e2;
}
// void bubble_sort(int arr[], int sz)
// { 
//     int i =0;
//     for (i=0;i<sz-1;i++)
//     {
//         int flag = 1;
//         int j=0;
//         for (j=0;j< sz-1-i; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//              int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                flag = 0;
//             }
         
//         }
//         if (flag == 1)
//         {
//             break;
//         }
//     }
// }
// void test1()
// {
//     int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//     int i = 0;
//     int sz = sizeof(arr)/ sizeof(arr[0]);
//     // bubble_sort(arr,sz);
//     qsort(arr,sz, sizeof(arr[0]), cmp_int);
//     for (i=0;i<sz;i++)
//     {
//     printf("%d ",arr[i]);

//     }
// }
// write a function like qsort function

void Swap(char* buf1, char*buf2, int width)
{
    int i= 0;
    for (i=0;i<width; i++)
    {
        char temp = *buf1;
        *buf1 = *buf2;
        *buf2 = temp;
        buf1++;
        buf2++;
    }
}
void bubble_sort(void* arr, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{ 
    int i =0;
    for (i=0;i<sz-1;i++)
    {
        int flag = 1;
        int j=0;
        for (j=0;j< sz-1-i; j++)
        {
            if(cmp((char*)arr + j*width, ((char*)arr+(1+j)*width)) )//arr 被强制转换成char*, because char 1byte
            {
               Swap((char*)arr + j*width, ((char*)arr+(1+j)*width),width);
               flag =0;
            }
         
        }
        if (flag == 1)
        {
            break;
        }
    }
}
void test3()
{
    int arr[] = { 9,8,7,6,5,4,3,2,1,0};
    int i = 0;
    int sz = sizeof(arr)/ sizeof(arr[0]);
    bubble_sort(arr,sz, sizeof(arr[0]), cmp_int);
    for (i=0;i<sz;i++)
    {
    printf("%d ",arr[i]);

    }
}
// struct stu
// {
//     char name[20];
//     int age;
// };
// int cmp_stu_by_name(const void* e1, const void* e2)
// {
//   return strcmp( ((struct stu*)e1)->name, ((struct stu*)e2)->name);//strcmp function return 0 1 -1
  //strcmp function 是一个一个字母的比，如果第一字母相同，则比较第二个字母，直到找到不同的字母，字母排在前面的是小的一方。
// }
// qsort sort construct data
// void test2()
// {
//    struct stu s[] ={{"zhangsan", 15},{"lisi", 30},{"wangwu", 25}};
//    int sz= sizeof(s) /sizeof(s[0]);
//    qsort(s,sz,sizeof(s[0]), cmp_stu_by_name);

// }
int main()
{
//    test1();
//    test2();
   test3();
    return 0;
}
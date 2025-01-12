#include<stdio.h>
// frog climb steps
// int fib(int n)
// {
// if (n<=2)
// {
//      return n;
// }
// else 
// {
// 递归思想， 就是求后一次和前一次的关系，并且这种关系可以用同一个函数表达出来。
//    return fib(n-1)+ fib(n-2);
// }
// }

// int main()
// {
// while (1)
// {
// int n = 0;
// int sum = 0;
// printf("pls enter the number of steps>>\n");
// scanf("%d", &n);
// sum = fib(n);
// printf("%d\n", sum);

// }
//     return 0;
// }

// int main()
// {
//    int n = 0;
//    scanf("%d",&n);
//    int arr[n];
//    int i = 0;
//    for (i=0;i < n; i++)
//    {
//    scanf("%d", &arr[i]);
//    }
//    int N = 0;
//    scanf("%d", &N);
//    int j = 0;
//    for (i = 0; i<n; i++)
//    {
//     if(arr[i] != N)
//     {
//         // 这里使用了arr[j]巧妙地节省了地址
//         arr[j++] = arr[i];
//     }
//    }
//    for (i = 0; i < j; i++)
//    {
//    printf("%d", arr[i]);

//    }
//     return 0;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int arr[n];
//     int i = 0;
//     int max = 0;
//     int min = 100;
//     for (i= 0; i<n; i++)
//     {
//      scanf("%d", &arr[i]);
//         if (arr[i] >= max)
//         {
//           max = arr[i];
//         }
//         if(arr[i] <= min)
//         {
//           min = arr [i];
//         }
//     }
//     printf("%d", max-min);
//     return 0;
// // }
// int main()
// {
//     char ch = 0;
        // if scanf 输入正常则执行， 不正常输出EOF
//     while (scanf("%c", &ch)==1)
//     {
        //  islower or isupper 库函数 也可以用
//         if(ch >= 'a' && ch <= 'z')
//         {
//             printf("%c\n", ch-32);
//         }
//         if(ch >= 'A' && ch <= 'Z')
//         {
//             printf("%c\n", ch+32);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     char ch ='0' ;
//     // 在%c号前加空格，跳过下一个字符之前所有的空白字符
//     while(scanf("%c", &ch) != EOF)
//     {
//         // 判断是不是字母，可以用库函数isalpha
//         if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//         {
//             printf("%c is an alphabet\n", ch);
//         }
//             // 存储scanf 的\n
//         else 
//             printf("%c is not an alphabet\n", ch);
//             getchar();
//     }
//     return 0;
// }
// int main()
// {
//     int i = 0;
//     int max = 0;
//     int n = 0;
//     for (i = 0; i< 3; i++)
//     {
//       scanf("%d", &n);
//       if (n > max)
//       {
//         max = n ;
//       }

//     }
//     printf (" %d\n", max);
//     return 0;
// }
#include <math.h>
// int main()
// {
//     int i = 0;
//     int new = 0;
//     for (i = 10000; i<=99999; i++)
//     {
//     int j = 0;
//        for (j = 1; j<= 4; j++)
//        {
//        new += (i / (int)pow(10, j)) * (i % (int)pow(10, j));
//        } 
//        if (new == i )
//        {
//         printf ("%d ", i);
//        }
//     }
//     return 0;
// }
// 十进制转二进制的方法， 十进制数字先%2，再 /2， 依次循环，将所有%2的得到的数字合起来就是该十进制数字的二进制
// 写一个函数返回参数二进制中1的个数

// int count_of_number_1(int n)
// {
//     int count = 0;
//    while (n)
//    {
//     if ((n % 2) == 1)
//     {
//      count++;

//     }
//      n = n / 2;
//    }
// }
// but the method above is not suitable for negative number.(because negative number devided by 2 is not equal to 1)
// next can do some change to suit the negative number
// int count_of_number_1(unsigned int n)
// {
//     int count = 0;
//     while (n)
//     {
//          if ((n % 2) == 1)
//         {
//           count++;
//         }
//      n = n / 2;
//     }
//     return count;
// }
// method 2
// int count_of_number_1(int n)
// {
//     //  & : both 1 then 1 , have one 0 then 0, so if the last place in binary n is equal to 1, then n&1 is equal to 1, else is equal to 0;
//     int i =0;
//     int count = 0;
//     for (i = 0; i < 32;i++)
//     {
//         // >> logic right move: right delet, left add 0
//        if (((n >> i) & 1) == 1)
//        {
//           count ++;
//        }
//        ;
//     }
//     return count;
// }
// method 3
// n & (n-1)
// example n =15  
//   n : 1111
//   n-1: 1110
//  n= n & (n-1) 1110
//   n:1110
//   n-1: 1101
//   n= n& (n-1) : 1100
//   n: 1100
//   n-1: 1010
//   n= n&(n-1): 1000
//   n: 1000
//   n-1:0111
//   n=n&(n-1):0000

// int count_of_number_1(int n)
// {
//     int count = 0;;
//     while (n)
//     {
//         count ++;
//         n = n & (n-1);
//     }
//     return count;
// }
// if we want to check whether a number is 2的N次方， we can use n&(n-1)
// 2^1 -> 10
// 2^2 -> 100
// 2^3 -> 1000
// so if ((n&(n-1) == 0), then the number is 2的N次方。

// int main()
// {
//     printf("pls enter a number>>");
//     int n = 0;
//     int count = 0;
//     scanf("%d", &n);
//     count = count_of_number_1(n);
//     printf("%d", count);
//     return 0;
// }

// 两个整数的二进制表达中，有多少个位数不同
// method 1: compare each place
// int count_diff_bit (int m, int n)
// {
//   int count = 0;
//   int i = 0;
//   for (i = 0; i<32; i++)
//   {
//     if ((((m>>i)&1)) != (((n>>i)&1)))
//     {
//         count++;
//     }
//   }
//   return count;
// }
// // method 2;: ^ , same is 0, different is 1
// int count_diff_bit (int m, int n)
// {
//   int count = 0;
//   int i = 0;
//   int ret = m ^ n;
//   for (i = 0; i<32; i++)
//   {
//     if (((ret>>i) & 1 ) == 1)
//     {
//         count++;
//     }
//   }
//   return count;
// }
// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
// int main()
// {
//     int i = 0;
//     int num = 0;
//     scanf("%d", &num);
//     // 获取奇数位
//     for (i=31; i>0;i -= 2)
//     {
//         printf("%d",(num >>i) & 1);
//     }
//     printf("\n");
//     // 获取偶数位
//     for (i=32; i>0;i -= 2)
//     {
//         printf("%d",(num >>i) & 1);
//     }
//     return 0;
// }

// int main()
// {
//  int i =0;
//  int j =0 ;
//  int n = 0;
//  scanf("%d", &n);
//  for (i=0;i<n;i++)
//  {
//     for (j = 0; j<n;j++)
//     {
//         if (i==j)
//         {
//             printf("*");
//         }
//         else if ((i+j) == (n-1))
//         {
//             printf("*");
//         }
//         else
//         {
//             printf(" ");
//         }
//     }
//         printf("\n");
//  }
//     return 0;
// }

int check_days(int n, int m)
{
    if (n<=12 && n>0)
    {
        if ((n == 4) || (n ==6 )|| (n ==9) || (n==11))
        {
            return 30;
        }
        if (n==2)
        {
             if  ((m % 4 == 0 ) && (m %100 != 0))
            {
                return 29;
            }
            else if (m % 400 == 0)
            {
                return 29;
            }
            else 
            {
                return 28;
            }

        }
        else 
        {
            return 31;
        }
    }
}
int main()
{
    int month = 0;
    int year = 0;
    int days = 0;
    printf("pls enter a date(month year)>>\n");
    while (scanf("%d%d",&month, &year) == 2)
    days = check_days(month, year);
    printf("%d", days);
    return 0;
}
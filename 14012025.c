#include<stdio.h>
#include<math.h>
// int is_flowernumber(int n)
// {
//     int count = 1;
//     int i = 0;
//     int sum =0;
//     int temp = n;
//     while(temp/10)
//     {
//         temp/=10;
//         count++;
//     }
//     temp = n;
//     for(i=1;i<=count;i++)
//     {
//         sum += pow((temp%10),count);
//         temp/=10;
//     }
//     if (sum == n)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }

// }
// int main()
// {
//     int n = 0;
//     int i = 0;
//     for (i=0;i<=100000;i++)
//     {
//          if (is_flowernumber(i)) 
//          {
//              printf("%d ",i);
//          }
//     }
//     return 0;
// }
// print diamond shape
// int main()
// {
//     int line = 0;
//     scanf("%d", &line);
//     // print up half
//     int i =0;
//     for (i=0;i<line +1 ; i++)
//     {
//         int j = 0;
//         // print " "
//         for (j=0;j< line-i;j++)
//         {
//             printf(" ");
//         }
//         // print"*"
//         for (j=0; j<2*i+1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     // print down half

//     for (i=0;i<line; i++)
//     {
//          int j = 0;
//         // print" "
//         for (j=0;j<=i;j++)
//         {
//             printf(" ");
//         }
//         // print"*"
//         for (j= 0;j<2*(line-i) - 1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main()
// {
//     int line = 0;
//     scanf("%d", &line);
//     // print up half
//     int i =0;
//     for (i=0;i<line; i++)
//     {
//         int j = 0;
//         // print " "
//         for (j=0;j< line-1-i;j++)
//         {
//             printf(" ");
//         }
//         // print"*"
//         for (j=0; j<2*i+1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     // print down half

//     for (i=0;i<line-1; i++)
//     {
//          int j = 0;
//         // print" "
//         for (j=0;j<=i;j++)
//         {
//             printf(" ");
//         }
//         // print"*"
//         for (j= 0;j<2*(line-i) - 1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// print diamand shape

// int main()
// {
//     int line = 0;
//     scanf("%d",&line);
//     // print up half
//     int i = 0;
//     for (i=0;i<line;i++)
//     {
//         // print space " "
//         int j = 0;
//         for (j=0;j< line-i-1;j++)
//         {
//             printf(" ");
//         }
//         // print "*"
//         for (j=0;j< 2 * i +1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     // print down half
//     for (i=0;i < line-1;i++)
//     {
//         // print space " "
//         int j = 0;
//         for (j=0; j < i+1;j++ )
//         {
//             printf(" ");
//         }
//         // print "*"
//         for (j=0; j< 2*(line-1)-1-2*i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给x元，可以买多少汽水

// int main()
// {
//     // the number of juice are equal to the money number plus empty number / 2
//     int money =0;
//     scanf("%d", &money);
//     int empty = money;
//     int count = money;
//      while (empty>=2)
//      {
//       count += (empty/2);
//       empty = empty / 2 + empty % 2;
//      }
//      printf("%d", count);
//     return 0;
// }
// 递归方法来算
// int calculate_soda(int x, int empty_bottles) 
// {
//     if (x == 0 && empty_bottles < 2) 
//     {
//         return 0;
//     }
    
//     int new_sodas = x + empty_bottles / 2;
//     int remaining_bottles = empty_bottles % 2 + new_sodas;
    
//     return new_sodas + calculate_soda(0, remaining_bottles);
// }

// int main() 
// {
//     int x;
//     printf("请输入金额: ");
//     scanf("%d", &x);
    
//     int total_sodas = calculate_soda(x, 0);
//     printf("可以喝到的汽水数量: %d\n", total_sodas);
    
//     return 0;
// }
// int main()
// {
//     int A =0;
//     int B = 0;
//     scanf("%d%d", &A,&B);
//     int m = (A>B?A:B);
//     if ((A>=0) && (A<=100000) &&(B>=0) && (B<=100000))
//     {
//         while(1)
//         {
//             if( (m%A==0) && (m%B==0))
//             {
//                 break;
//             }
//             else
//             {
//               m++;
//             }
//         }
//     }
//         printf("最小公倍数：%d", m);
//     return 0;
// }
#include<assert.h>
#include<string.h>
void reverse (char*left, char* right)
{
    char temp = *left; 

    while (left<right)
    {
     *left = *right;
     *right = temp;
     left++;
     right--;
    }
}

int main()
{
    char arr[101]= {0};
    gets(arr);
    // 逆置total string
    int len = strlen(arr);
    reverse (arr, arr+len-1);
    // 逆序each word
    char* start = arr;
    char* end = start;
    while(*end != '0')
    {
         while(*end != ' ' || *end != '\0')
         {
            end++;
         }
        reverse(start, end-1);
        while (*end != '\0')
        end++;
        start = end;

    }

    return 0;
}

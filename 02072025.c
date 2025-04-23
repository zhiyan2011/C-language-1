#include<stdio.h>

// int main()
// {
//     int n = 0;
//     while (scanf("%d",&n)== 1)
//     {
//         // print up
//         int i = 0;
//         for (i = 0; i<n+1;i++)
//          {
//              int j =0;
//              for (j=0; j<2*n-2*i; j++)
//             {
//                printf(" ");
//             }
//              for (j=0;j<i+1;j++)
//              {
//                 printf("*");
//              }
//         printf("\n");
//          }
//     //print below
//          for (i = 0; i<n;i++)
//          {
//             int j =0;
//             for (j=0; j<2*i+2; j++)
//                   printf(" ");
//             for (j =0;j<n-i;j++)
//                   printf("*");
//              printf("\n");
//          }
//     }
//     return 0;
// }

// int main()
// {
//     int score =0;
//     int count =0;
//     int max =0;
//     int min = 100;
//     int sum =0;
//     while (scanf("%d", &score)==1)
//     {
//         count++;
//         if (score >max)
//         {
//           max = score;
//         }
//         if(score < min)
//         {
//             min = score;
//         }
//         sum+= score;
//         if (count == 7)
//         {
//           printf("\n");
//           printf("%.2lf\n",(sum -max -min) / 5.00);
//           count = 0;
//           max =0;
//           min =0;
//           sum =0;
//         }
//     }

//     return 0;
// }
// #include<unistd.h>
// #include<stdio.h>
// int    ft_putstr(char *str)
// {
//     int i =0;
//     while (str[i] != '\0')
//     {
//         if (! ((str[i] >= 'a' && str[i] <= 'z') || ( str[i] >='A' && str[i] <= 'Z')))
//         {
//             return 0; 
//         }
//         i++;
//     }
//     return 1;
// }
// int main()
// {
//     char arr[] = "sdfgh4j";
//     int ret =0;
//     ret = ft_putstr(arr);
//     printf("%d", ret);
//     return 0;
// }

// #include<unistd.h>
// #include<stdio.h>
// int    ft_putstr(char *str)
// {
//     int i =0;
    
//     if (str[0] == '\0')
//     {
//         return 1;
//     }
//         i = 0;
//     while (str[i] != '\0')
//     {
//            if (! (str[i] >= '0' && str[i] <= '9') )
//            {
//              return 0; 
//            }
//            i++;
//     }
//     return 1;

// }
// int main()
// {
//     char arr[] = "";
//     int ret =0;
//     ret = ft_putstr(arr);
//     printf("%d", ret);
//     return 0;
// }     
// char    *ft_strcapitalize(char *str)
// {
//     int i;
//     i = 0;
//     while (str[0] != '\0')
//     {
//         if (str[i]>= 32 && str[i] <= 126  && str[i] )
//     }
// }                               
// man strlcpy
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int av;
    i = 0;
    j = 0;
    av = 0;
    while (dest[i])
     i ++;
     while (src[j])
     j++;
     return (j+size);
     while (av < size -i -1 && src[av])
     {
        dest[i+av] = src [av];
        av++;
     }
     dest[i+av] = '\0';
     return (i+j);
     }
#include<stdio.h>

// int main()
// {
//     int a = 0;
//     int b =0;
//     int c = 0;
//     while(scanf("%d %d %d", &a, &b, &c) == 3)
//     {

//     if ((a+b >c) && (a+c >b) && (b+c > a))
//     {
//         if( (a==b && b!=c) || (a==c && c != b) || (b==c && c!=a))
//         {
//             printf("isosceles triangle\n");
//         }
//         else if (a==b && b == c)
//         {
//          printf("Equilateral triangle\n");
//         }
//         else
//         {
//             printf("Ordinary triangle\n");
//         }
//     }
//     else
//     {
//        printf("not a trianglel");
//     }
//     }
//     return 0;
// }
// void printarr(int* parr,int n)
// {
//     int i = 0;
//     for (i=0;i<n;i++)
//     {
//         printf("%d",*(parr+i));
//     }
// }
// int  main()

// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     printarr(arr,sz);
//     return 0;
// }
#include<string.h>

// void norder(char arr[], int n)
// {
//   int left = 0;
//   int right = n -1 ;
//   while (left < right)
//   {
//     char temp = arr[left];
//     arr[left] = arr[right];
//     arr[right] = temp;
//     left ++;
//     right --;
//   }
//     printf("%s",arr);
  
// }
// int main()
// {
//     char arr[10001];
//     fgets(arr,sizeof(arr),stdin);
//     // must use the strlen funtion, because of sizeof will output the actually length of arr.
//     // move the tab
//     // strcspn function should be in front of SZ. otherwise, cannot printf.
//     arr[strcspn(arr, "\n")] = 0;
//     int sz = strlen(arr);
//     norder(arr,sz);
//     return 0;
// }
// 求出0-100000之间所有“水仙花数”并输出
#include<math.h>
int is_flowernumber(int n)
{
    int count =0;
    int i =0;
    int sum =0;
    while((n%10)>0)
    {
        n = n/10;
        count++;
    }
    for(i=0;i<count-1;i++)
    {
        sum += pow((n%10),count);
        n/=10;
    }
    if (sum == n)
    printf("%d", n);

}
int main()
{
    int n = 0;
    int i = 0;
    for (i=0;i<=100000;i++)
    {
    is_flowernumber(n);
    return 0;
}
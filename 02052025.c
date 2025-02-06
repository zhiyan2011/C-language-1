#include<stdio.h>

int main()
{
    int killer =0;
    for (killer = 'a'; killer < 'd';killer++)
    {
        if ((killer != 'a') + (killer == 'c') + (killer == 'd') +(killer != 'd') ==3)
         {
            printf("xunshou is %c\n", killer);
         }
    }
}


//打印杨辉三角
int main()
{
    int arr[10][10] = {0};
    int i =0;
    int j =0;
    for (i =0; i<10;i++)
    {
        for (j =0; j<=i;j++)
        {
              if(j==0)
              {
                arr[i][j] = 1;
              }
              if(i == j)
              {
                arr[i][j] =1;
              }
              if (i>=2 && j>=1)
              arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    for (i = 0;i<10;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// //旋转字符 例如 ABCD 按一个字符旋转得到BCDA 按两个字符旋转得到CDAB
#include<string.h>
//method1
void left_rotate(char arr[],int k)
{
   int i = 0;
   char temp ='0';
   int len = strlen(arr);
   for (i =0;i<k;i++)
   {
     temp = arr[0];
     int j =0;
     for (j=0;j<len-1; j++)
     {

     arr[j] = arr[j+1];
     }
     arr[len-1] = temp;
   }
}

int main()
{
    char arr[] = "abcdef";
    int k =0;
    scanf("%d",&k);
    left_rotate(arr,k);
    printf("%s\n",arr);
    return 0;
}

//method2
#include<assert.h>
void reverse(char* left, char* right)
{
    assert(left && right);
   while (left < right)
   {
    char temp = *left;
    *left = *right;
    *right = temp;
    left ++;
    right --;
   }
}
void left_rotate(char arr[], int k)
{
    int len = strlen(arr);
    k %= len;
    reverse(arr, arr+k-1);
    reverse(arr+k, arr+len-1);
    reverse(arr,arr+len-1);
}
int main()
{
    char arr[] = "abcdef";
    int k = 0;
    scanf("%d", &k);
    left_rotate(arr,k);
    printf("%s\n",arr);
    return 0;
}

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增，每列从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于oN
// 右上角和左下角的元素比较特殊，可以在查找时去除一行或者一列
struct Point
{
    int x;
    int y;
};
struct Point find_num(int arr[3][3], int k, int r, int c)
{
    int x =0;
    int y = c-1;
    struct Point p = {-1,-1};
   while (x<= r-1 && y>=0)
   {

         if (k>arr[x][y])
        {
          x++;
        } 
         else if (k<arr[x][y])
        {
           y--;
        }
         else 
        {
            p.x = x;
            p.y = y;
           return p;
        }
   }
   return p;
}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k =0 ;
    scanf("%d", &k);
    struct Point ret = find_num(arr, k, 3,3);

    return 0;
}

struct Point
{
    int x;
    int y;
};
int  find_num(int arr[3][3], int k, int *px, int *py)// px py 是返回型参数
{
    int x =0;
    int y = *py-1;
    struct Point p = {-1,-1};
   while (x<= *px-1 && y>=0)
   {

         if (k>arr[x][y])
        {
          x++;
        } 
         else if (k<arr[x][y])
        {
           y--;
        }
         else 
        {
            *px = x;
            *py = y;
           return 1;
        }
   }
   *px = -1;
   *py = -1;
   return 0;
}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k =0 ;
    scanf("%d", &k);
    int x =3; 
    int y = 3;
    int ret = find_num(arr, k, &x,&y);

    return 0;
}

// 写一个函数判断一个字符串是不是另外一个字符串旋转得到的
//method 1
int LEFT_ROTATE(char arr1[], char arr2[])
{
    int len = strlen(arr1);
    int i = 0;
    for (i = 0;i< len; i++)
    {
         char temp = arr1[0];
         int j = 0;
         for (j=0;j< len -1; j++ )
         {
             arr1[j] = arr1[j + 1];
         }
             arr1[len-1] = temp;
         if (strcmp(arr1,arr2)== 0)
         {
           return 1;
         }
    }
        return 0;

}
// method2:追加自己字符串，这样追加后的字符串包含了任何旋转之后的可能性
int LEFT_ROTATE(char arr1[],char arr2[])
{
    int len2 = strlen(arr2);
    int len1 = strlen(arr1);
    if (len1!= len2)
    {
        return 0;
    }
    strncat(arr1,arr1,len1);
    char* ret = strstr(arr1,arr2);
    if (ret == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
// }
// // method3
void reverse (char* left, char* right)
{
  char temp = *left;
  *left = *right;
  *right = temp;
}
int LEFT_ROTATE(char arr1[], char arr2[])
{
     int len = strlen(arr1);
     int i =0;
     for (i=1;i<len;i++)
     {
        rverse(arr1, arr1+i-1);
        reverse(arr1+i, arr1+len-1);
        reverse(arr1,arr1+len-1);
        if (strcmp(arr1,arr2)== 1)
        {
            return 1;
        }
     }
     return 0;
}

int main()
{
    char arr1[] = "ABCDEF";
    char arr2[] = "CDEFAB";
    int ret = LEFT_ROTATE(arr1, arr2);
     if (ret==0)
     {
        printf("yes.\n");
     }
     else
     {
        printf("no\n");
     }

     return 0;
}

//矩阵转置

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n,&m);
    int arr[n][m];//变长数组不能初始化
    int i =0;
    for (i = 0;i<n;i++)
    {
        int j = 0;
        for (j =0; j<m; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i< m;i++)
    {
        int j =0;
        for (j =0; j< n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}

//判断是否为上三角矩阵
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];//变长数组不能初始化
    int i =0;
    int j = 0;
    for (i = 0;i<n;i++)
    {
        for (j =0; j<n; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int flag = 1;
        for (i=0; i<n;i++)
        {
            for (j=0;j<i;j++)
            {
                if (arr[i][j]!= 0)
                {
                    flag = 0;
                    goto end;
                }
            }
        }
end:
        if (flag==1)
        printf("yes\n");
        if (flag==0)
        printf("no\n");
    return 0;
}


//有序序列判断
int main()
{
    int n =0;
    scanf("%d", &n);
    int i= 0;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag1 = 0;
    int flag2 = 0;
    // 从小到大排列
    for (i = 0; i< n ; i++)
    {
       if(arr[i] > arr[i+1])
       {
         flag1 = 1;
       }
       else if (arr[i] < arr[i+1])
       {
         flag2 = 1;
       }
       else
       {
          ;
       }
    }
  if ((flag1 ==1)&&(flag2 == 1))
  {
    printf("no\n");
  }
  else 
  {
     printf("yes\n");
  }
}
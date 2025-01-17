#include<assert.h>
#include<string.h>
#include<stdio.h>
void reverse (char*left, char* right)
{

    while (left<right)
    {
    char temp = *left; 
     *left = *right;
     *right = temp;
     left++;
     right--;
    }
}

int main()
{
    #define MAX_LENGTH 101 // Define a maximum length for your input
    char arr[MAX_LENGTH] ={0};
    fgets(arr, MAX_LENGTH, stdin);
    //  arr[strcspn(arr, "\n")] = 0; 
    // gets(arr);
    // 逆置total string
    int len = strlen(arr);
    reverse (arr, arr+len-1);
    // 逆序each word
    char* start = arr;
    while(*start)
    {
         char* end = start;
         while(*end != ' ' && *end != '\0' && *end != '\n')
         {
            end++;
         }
        reverse(start, end-1);
        if (*end != '\0')
             end++;
        start = end;

    }
    printf("%s\n",arr);

    return 0;
}
#include "contact.h"
#include "contactfunction.c"


void menu()
{
    printf("********************************\n");
    printf("********1.add*******2.del*******\n");
    printf("********3.search****4.modify****\n");
    printf("********5.show******6.sort******\n");
    printf("********0.exit******************\n");
    printf("********************************\n");

}
//枚举： 枚举就是一种类型，返回的是int , 从0 开始。
enum Option
{
     //枚举常量，不能修改
     Exit,
     add,
     del,
     search,
     modify,
     show,
     sort,

};

int main()
{
    int input = 0;
    Contact con;// 创建通讯录，向内存申请空间
    //初始化通讯录
    InitContact(&con);
    do
    {
        menu();
        printf("please choose:\n");
        scanf("%d",&input);
        switch(input)
        {
            case add:
                AddContact (&con);
                 break;
            case del:
                DelContact(&con);
                 break;
            case search:
                SearchContact(&con);
                 break;
            case modify:
                ModifyContact(&con);
                 break;
            case show:
                 ShowContact(&con);
                 break;
            case sort:
                 SortContact(&con);
                 break;
            case Exit:
                 SaveContact(&con);
                 DestroyContact(&con);
                 printf("exist\n");
                 break;
            default:
                printf("choose error\n");
                 break;
        }

    } while(input);
    return 0;
}
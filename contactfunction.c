//对函数进行实现
# include "contact.h"

// //静态版本
// void InitContact(Contact* pc)
// {
//     assert(pc);
//     pc->count = 0;
//     memset(pc->data, 0, sizeof(pc->data));//
// }
//动态版本
int InitContact(Contact* pc)
{
    assert(pc);
    pc->count = 0;
    pc->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
    if (pc->data == NULL)
    {
        printf("InitContact:%s\n", strerror(errno));
        return 1;
    }
    pc->capacity = DEFAULT_SZ;
    return 0;
}
//静态版本
// void AddContact(Contact* pc)
// {
//     assert(pc);
//     if (pc->count == 100)
//     {
//         printf("contact list is full, cannot add any more.\n");
//         return;
//     }
//     printf("pls enter name:");
//     scanf("%s",pc->data[pc->count].name );
//     printf("pls enter age:");
//     scanf("%d", &(pc->data[pc->count].age));
//     printf("pls enter sex:");
//     scanf("%s",pc->data[pc->count].sex);
//     printf("pls enter tele:");
//     scanf("%s",pc->data[pc->count].tele );
//     printf("pls enter addr:");
//     scanf("%s",pc->data[pc->count].addr );
//     pc->count ++;
//     printf("addtion success\n");
// }
//动态版本
   void CheckCapacity(Contact* pc)
    {
        if (pc->count == pc->capacity)
    {
         PeoInfo* ptr= realloc(pc->data, (pc->capacity+ INC_SZ)*sizeof(PeoInfo));
         if (ptr == NULL)
         {
            printf("AddContact:%s\n", strerror(errno));
            return;
         }
         else
         {
          pc->data = ptr;
          pc-> capacity += INC_SZ;
          printf("add success.\n");
         }
    }
    }

void AddContact(Contact* pc)
{
    assert(pc);
    // check whether add capacity
    CheckCapacity(pc);
    //增容
   
    printf("pls enter name:");
    scanf("%s",pc->data[pc->count].name );
    printf("pls enter age:");
    scanf("%d", &(pc->data[pc->count].age));
    printf("pls enter sex:");
    scanf("%s",pc->data[pc->count].sex);
    printf("pls enter tele:");
    scanf("%s",pc->data[pc->count].tele );
    printf("pls enter addr:");
    scanf("%s",pc->data[pc->count].addr );
    pc->count ++;
    printf("addtion success\n");
}
void ShowContact(const Contact* pc)
{
    assert(pc);
    int i =0;
    printf("%20s\t%5s\t%5s\t%12s\t%30s\n","name","age","sex","tele","addr");
    for (i = 0;i < pc->count; i++)
    {
        printf("%20s\t%5d\t%5s\t%12s\t%30s\n", pc->data[i].name,
                                               pc->data[i].age, 
                                               pc->data[i].sex, 
                                               pc->data[i].tele, 
                                               pc->data[i].addr);
    }
}  
static int FindByName(Contact* pc, char name[])// static 确保只在本文件中可以用
{
    assert(pc);
    int i = 0;
    for(i=0; i<pc->count;i++)
    {
        if (0 == strcmp(pc->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}                
void DelContact(Contact* pc)
{
    char name[MAX_NAME] = {0};
    assert(pc);
    int i = 0;
    if (pc->count == 0)
    {
        printf("contact is empty, no content to be deleted\n");
    }
    printf("pls enter the name to be delete:");
    scanf("%s", name);
    // search
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf(" no the name\n");
        return;
    }
    // delete
    for (i = pos;i< pc->count-1; i++)
    {
        pc->data[i] = pc->data[i+1];
    }
        pc->count--;
        printf ("delete successfully.\n");
}
void SearchContact(Contact* pc)
{
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("pls enter the name to search:");
    scanf("%s", name);
    int i = 0;
    // search
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf(" no the name\n");
        return;
    }
    printf("%20s\t%5s\t%5s\t%12s\t%30s\n","name","age","sex","tele","addr");
    printf("%20s\t%5d\t%5s\t%12s\t%30s\n", pc->data[pos].name,
                                           pc->data[pos].age, 
                                           pc->data[pos].sex, 
                                           pc->data[pos].tele, 
                                           pc->data[pos].addr);

}
void ModifyContact(Contact* pc)
{
    //search
    assert(pc);
    char name[MAX_NAME] = {0};
    printf("pls enter the name to modify:");
    scanf("%s", name);
    int i = 0;
    // search
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf(" no the name\n");
        return;
    }
    printf("found, now begint to modify:\n");
    // modify
    printf("pls enter name:");
    scanf("%s",pc->data[pos].name );
    printf("pls enter age:");
    scanf("%d", &(pc->data[pos].age));
    printf("pls enter sex:");
    scanf("%s",pc->data[pos].sex);
    printf("pls enter tele:");
    scanf("%s",pc->data[pos].tele );
    printf("pls enter addr:");
    scanf("%s",pc->data[pos].addr );
    printf("modify success\n");
}
int cmp_peo_by_name(const void* e1, const void* e2)
{
    return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
    assert(pc);
    qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name );
    printf("sort success\n");
}
//destroy contact
void DestroyContact(Contact* pc)
{
    assert(pc);
    free(pc->data);
    pc->data = NULL;
}





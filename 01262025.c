#include<stdio.h>
#include<string.h>
#include <errno.h>

//文件
//程序文件：.c文件
//数据文件：程序运行（.c程序运行）需要写数据到文件中（这个过程叫写，或者输出）或者从文件中进行读取数据（这个叫读，或者输入）。
//文件名：文件路径+文件主干名+文件后缀
// int main()
// {
//     FILE* pf = fopen("C:\\Users\\desktop\\text.txt","w");// 文件指针：FILE* 是指向文件的文件信息区，该区存在内存中，并与存在硬盘中的文件关联，所以可以通过FILE* 找到硬盘中的文件。 
//     //FILE* 是结构体类型的指针，是重命名后的类型
//     //当打开文件时，就会形成一个文件信息区，并返回一个FILE*的指针，该指针指向该文件。
//     // fopen 是打开文件函数， 返回的是FILE* 类型， w 表示写
//     //打开模式， r: 为了读数据，文件必须存在。 w:表示写数据， a表示追加. rb ：二进制的读
//     //fclose 是关闭文件函数。
//     // 这里text.txt 没有写路径，是相对路径，表示当前写代码的文件夹
//     // 若想访问其他文件夹下的文件，可以添加路径，并在\前再加一个\，转义字符
//     if (pf == NULL)// pf 返回NULL表示打开失败
//     {
//         printf("%s\n", strerror(errno));
//         return 1;
//     } 
//     fclose(pf);
//     pf = NULL;//
//     return 0;
// }
//fgetc :字符输入
//fputc：字符输出
// int main()
// {
//     FILE* pf = fopen("text.txt","w");
//     if(pf == NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     // write documents
//     char i =0;
//     for (i = 'a'; i<= 'z'; i++)
//     {
//         fputc(i, pf);
//     }
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }
// read documents
// int main()
// {
//     FILE* pf = fopen("text.txt","r");
//     if(pf == NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     // read documents
//     int ch = 0;
//     while ((ch = fgetc(pf)) != EOF);
//     {
//        printf("%c\n", ch);
//     }
   
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }
//写一行数据 fputs：文本行输入
// int main()
// {
//     FILE* pf = fopen("text.txt","w");
//     if(pf == NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     // write documents; 写文件时，如果文件里有内容，会把原来的删掉
//     fputs("hello\n", pf);
//     fputs("hello\n", pf);

//     fclose(pf);
//     pf = NULL;
//     return 0;
// }
//读一行数据 fgets：文本行输出

// int main()
// {
//     FILE* pf = fopen("text.txt","r");
//     if(pf == NULL)
//     {
//         // printf("%s\n",strerror(errno));
//         perror("fopen"); //与上一行一样的作用
//         return 1;
//     }
//     // read documents; 读文件时
//     char arr[20];
//     fgets(arr, 5, pf); //实际会读4个，因为会把‘\0’也读取 
//     printf("%s\n", arr);
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }
//格式化数据的输入
// struct S 
// {
//   char arr[10];
//   int age;
//   float score;
// };
// int main()
// {
//     struct S s = {"zhangsan",25, 50.5f};
//     FILE* pf = fopen("test.txt", "w");
//     if (pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     // 按照某一种格式把结构体数据写入文件中
//     fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }

// struct S 
// {
//   char arr[10];
//   int age;
//   float score;
// };
// int main()
// {
//     struct S s = {0};
//     FILE* pf = fopen("test.txt", "r");
//     if (pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     // 把文件中的数据读出来
//     fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//     // printf("%s %d %f\n",s.arr, s.age, s.score);
//     fprintf(stdout, "%s %d %f\n",s.arr, s.age, s.score);//stdout 表示把信息打印到屏幕上

//     fclose(pf);
//     pf = NULL;
//     return 0;
// }
//任何一个c程序，只要运行起来就会默认打开3个流： 
//FILE * stdin :标准输入流（键盘）
//FILE *stdout ：标准输出流（屏幕）
//FILE *stderr： 标准错误流（屏幕）

//二进制输入：只能从文件中输入 fread
//二进制输出
// struct S 
// {
//   char arr[10];
//   int age;
//   float score;
// };
// int main()
// {
//     struct S s = {"zhangsan",25, 50.5f};
//     FILE* pf = fopen("text.txt","wb");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     fwrite(&s, sizeof(struct S), 1, pf);// 看不懂，但是看可以用二进制读出来，可以看懂。

    //   fclose(pf);
    //   pf = NULL;
//     return 0;
// }
// int main()
// {
//     struct S s = {0};
//     FILE* pf = fopen("text.txt","rb");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     fread(&s, sizeof(struct S), 1, pf);
//     printf("%s %d %f", s.arr, s.age, s.score);

//     return 0;
// }
//scanf fscanf sscanf
//printf fprintf sprintf
//scanf:针对标准输入的格式化输入语句 ； printf ： 是针对标准输出的格式化输出语句
//fscanf: 是针对所有输入流的格式化输入语句； fprintf: 是针对所有输出流的格式化输出语句
// sprintf:把一个格式化的数据写到字符串中，本质是把一个格式化的数据变成字符串
//sscanf: 把一个字符串转换成格式化的数据。 当我们需要把一串数据进行格式化显示
// struct S 
// {
//   char arr[10];
//   int age;
//   float score;
// };
// int main()
// {
//     struct S s = {"zhangsan", 20, 55.5f};
//     char buf[100] = {0};
//     sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//     printf("%s\n", buf);
//     return 0;
// }
// struct S 
// {
//   char arr[10];
//   int age;
//   float score;
// };
// int main()
// {
//     struct S s = {"zhangsan", 20, 55.5f};
//     struct S temp = {0};
//     char buf[100] = {0};
//     //把s中的格式化数据转化成字符串放到buf中
//     sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//     //字符串形式打印
//     printf("%s\n", buf);
//     // 从字符串buf中取出数据放入temp 结构体中
//     sscanf(buf,"%s %d %f", temp.arr, &(temp.age),&(temp.score));
//     //格式化形式打印
//     printf("%s %d %f", temp.arr, temp.age, temp.score);
//     return 0;
// }
//fseek 随机定位文件指针的位置
// int main()
// {
//     FILE* pf = fopen("test.txt","r");
//     if (pf == NULL)
//     {
//         printf("%c\n", strerror(errno));
//         return 1;
//     }
//     //读文件
//     //定位文件指针
//     fseek(pf,2, SEEK_SET);//2表示偏移量， SEEK_SET表示跟起始位置的偏移量
//     // fseek(pf,2, SEEK_END);//2表示偏移量， SEEK_END表示从文件末尾位置算

//     int ch = fgetc(pf);
//     printf("%c\n", ch);
//     fseek(pf,2, SEEK_CUR);//2表示偏移量， SEEK_CUR表示从上次定位的位置算
//     ch = fgetc(pf);
//     printf("%c\n", ch);

//     fclose(pf);
//     pf = NULL;
//     return 0;
// }
//ftell 文件制止偏移量的计算
//ftell(pf)；
//rewind 让文件指针的文职回到起始值 
//rewind(pf);
//根据数据的组织形式，数据文件被称为文本文件或者二进制文件
//数据在内存中以二进制的形式存储，如果不加转换的输出到外存中，就是二进制文件
//如果要求在外存上以ASCII码的形式存储，则需要在存储前转换，以ASCII字符的形式存储的文件就是文本文件
//一个数据在内存中是怎么存储的呢
//如果有整数10000， 如果以ASCII码的形式输出到磁盘（每一位通过其ASCII码值对应的二进制形式），则磁盘中占用5个字节，而二进制形式，在磁盘占4个字节。
// int main()
// {
//     int a = 10000;
//     FILE* pf = fopen("test.txt","wb");
//     if (pf == NULL)
//     {
//         printf("%s \n", strerror(errno));
//     }
//         fwrite(&a, 4, 1, pf);//二进制形式写进去，16进制显示
//         fclose(pf);
//         pf = NULL;
//         return 0;
// }
//文件读取结束的判定
//feof:end of file 在文件读取过程中，不能用feof的返回值直接来判断文件是否结束，而是应用于当文件读取结束的时候，判断是读取失败结束还是遇到文件结尾结束。
//文本文件读取是否结束，判断返回值是否为EOF(fgetc), 或者NULL(fgets)
//二进制文件读取是否结束，判断返回值是否小于实际要读的个数
//例如，用fread, 返回值是整型，该整型表示被成功读取的个数
// int main()
// {
//     int c;
//     FILE* fp = fopen("test.txt","r");
//     if(!fp)//表示fp为空指针
//         {
//         perror("FILE OPENING FAILED");
//         return 1;
//     }
//     // fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//     while((c=fgetc(fp) !=EOF))//标准c I/O 读取文件循环
//     {
//         putchar(c);
//     }
//     //判断什么原因结束的
//     if(ferror(fp))//是不是读取遇到错误结束
//     {
//         puts("I/O error when reading");
//     }
//     else if(feof(fp))//还是遇到文件末尾结束
//         puts("End of file reached succesfully.");
//         fclose(fp);
// }
//文件缓冲区
//从内存向磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上。
//如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等）。
//缓冲区的大小根据c编译系统决定
//fclose 时，会自动刷新缓冲区，把缓冲区的数据写到文件中


//程序环境与预处理
//在ANSI C(国际标准)的任何一种实现中，存在两个不同的环境：
//翻译环境：在这个环境中源代码被转换为可执行的机器指令
//执行环境：得到机器指令后，用于实际执行代码
//源文件（多个.c文件），每一个源文件单独经过编译器（cl.exe）处理生成对应的目标文件（.obj）。然后链接库(头文件依赖的库）和目标文件一起经过链接器(link.exe)形成可执行程序（.exe)
//编译包括 预编译/预处理， 编译，汇编 三个过程
//预处理阶段(生成 .i文件) -E：1.会把头文件中的东西包含进去；2.把注释去掉；3. #define 定义的符号的替换，并删除定义行删掉； 总之，预处理阶段是进行文本操作
//编译 -S：（生成 .s文件）：形成汇编代码，即把C语言代码转换成汇编代码：语法分析，词法分析，符号汇总，语义分析
//符号汇总：把全局的符号汇总出来： main, define 符号等
//汇编 -C:生成 .o文件：二进制文件， 把汇编代码转换成二进制指令或者机器指令， 同时形成符号表（前面每一个源文件会形成对应的符号表， 符号表包括符号+对应的地址）
//链接： 1.合并段表； 2.符号表的合并（例如 add函数有两个地址（一个是调用，一个是实际有函数内容）这样会合成那个有函数内容的表的地址）和重定位

//运行环境
//1.程序必须载入到内存中，在有操作系统的环境中，一般由操作系统完成。在独立的环境中，程序的载入必须由手工安排，也可能是通过可执行代码置入只读内存来完成
//2.程序的执行便开始，接着调用main函数
//3.开始执行程序代码，这个时候程序将使用一个运行时堆栈（Stack），存储函数的局部变量和返回地址。程序同时也可以使用静态（static）内存，存储于静态内存中的变量在程序的
//整个执行过程一直保留他们的值
//4.终止程序，正常终止main函数，也有可能意外终止
//《程序员的自我修养》

//预处理详解
//预处理符号5 

//宏
// #define double(x) ((x)+(x))// define 后面有空格，多加括号
// 在程序中#define 定义符号和宏时，需要涉及几个步骤
//1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，他们首先被替换
// 2.替换文本随后被插入到程序中原来文本的位置，对于宏，参数名被他们的值所替换
//3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号，如果是，就重复上述处理过程
//注意：
//1。 宏参数和#define定义中可以出现其他#define定义的符号，但是对于宏，不能出现递归
//2.当预处理器搜索#define定义的符号时候，字符串常量的内容并不被搜索。
//例如
// #define M 100
// #define Double(x) ((x)+(x))
// int main()
// {
//     Double(M+2);
//     // 1.Double(100 +2);
//     //2.((100+2)+(100+2))
//     //Double不能调用Double
//     //"M" 这时的M不会被替换

//     return 0;
// }


// # 和 ##
// #define PRINT(N) printf("the value of "#N " is %d \n",N)//#N 对应"a" 这里相当于将#N插入两个字符串
// #define PRINT(N,FORMAT) printf("the value of "#N" id" Format"\n", N)
// int main()
// {
//     printf("hello world");
//     printf("hello""world"); //两个一样打印
//     int a =10;
//     // printf("the value of is a is %d\n", a);//写成宏
//     PTINT(a);
//     int b= 20;
//     // printf("the value of is b is %d\n", b);//写成宏
//     PTINT(b);
//     float f = 3.14f;
//     PTINT(f,"%1f");

//     return 0;
// }


//## 可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符
// #define CAT(Class, Num) Class##Num
// int main()
// {
//     int Class106 = 100;
//     printf("%d\n",CAT(Class,106));//把Class and 106 合成Class106

//     return 0;
// }

// 带副作用的宏宏参数
// int main()
// {
//     int a = 10;
//     int b = a+1;
//     int b = ++a;// 有副作用，因为得到b的时候，a也变了
// }
// #define MAX(x,y) ((x)>(y)? (x):(y))
// int main()
// {
//     int a = 5;
//     int b = 4;
//     int m = MAX(a++,b++);
//     // 替换后 int m = MAX(a++,b++) =((a++)>(b++)? (a++):(b++)) 
//     //(a++)>(b++)?使用时 a = 5, b =4， 用完后a =6,b = 5 
//     // (a++):(b++)// 使用时 a = 6,b =5,使用后a = 7,b = 5(因为表达式a++为真，所以b++不执行)
//     // so  m = 6, a =7, b= 5
//     return 0;

// }

//宏和函数
// #define MAX(x,y) ((x)>(y)?(x):(y))
// //function
// int Max(int x, int y)
// {
//     return (x>y?x:y);
// }
// 对于浮点数比较，用宏更好， 宏是类型无关的。 宏是无法调试的。宏的名字一般大写
//命名约定
// 宏的名全大写
//函数名不全大写
//  #undef  取消前面的定义

//条件编译
// #if  #endif
// #ifdef symbol   #endif
//#ifndef symbol   #endif
// if defined   #endif
//if !defined   #endif
// #if  #elif  # else #endif
//嵌套指令
// #if defined ()
//     #ifdef OPPTION1
//     #endif
//     #ifdef option 2
//     #endif
// #elif defined()
//     #ifdef option3
//     #endif
// #endif

//文件包含
// #include
//避免重复头文件包含的方法,见下面
//方法一
//ifndef 
//define
//endif
//方法二
//#pragma once


// <> and  " " 区别
// #include<stdio.h>// 直接去库目录下查找
// #include"test.h"// 1.先去代码所在的路径下查找，如果找不到再去库目录下查找

// offsetof 写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
// #include <stddef.h>
// struct S
// {
//     char c1;
//     int i;
//     char c2;
// };
// #define OFFSETOF(type, m_name) (size_t) &(((type*)0) -> m_name)// 将0的地址强制转换成struct S的地址
// int main()
// {
//   struct S s = {0};//开辟空间 c1偏移量是c1的地址减去开辟空间的起始位置的地址，所以偏移量是0. 若将开辟空间的起始位置设为0
//   printf("%d\n",OFFSETOF(struct S,c1));
// //   printf("%d\n",offsetof(struct S,i));
// //   printf("%d\n",offsetof(struct S,c2));

//     return 0;
// }
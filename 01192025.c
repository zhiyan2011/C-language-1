
#include <stdio.h>
// int main ()
// {
//     int a[] ={1,2,3,4};
//     printf("%d\n",sizeof(a));
//     printf("%d\n", sizeof(a+0));// a不是单独的，也没有取地址，所以a是受元素地址，a+0也是首元素的地址
//     printf("%d\n",sizeof(*a));//对首元素进行解引用
//     printf("%d\n",sizeof(a+1)); //第二个元素的地址
//     printf("%d\n",sizeof(a[1]));
//     printf("%d\n",sizeof(&a));//整个数组的大小,但都是地址，所以大小还是4/8byte
//     printf("%d\n",sizeof(*&a));// &a---int (*)[4], 解引用得到整个数组
//     printf("%d\n",sizeof(&a + 1));//&a 是对整个数组取地址，得到的是 int (*)[4],数组地址加一，从数组a的地址向后跳过整个数组后的地址
//     printf("%d\n",sizeof(&a[0]));//&a[0]得到的还是地址 
//     printf("%d\n",sizeof(&a[0] + 1));//第一个元素的地址加1，跳到第二个元素的地址

//     return 0;


// }

// int main()
// {
//     char arr[] ={'a','b','c','d','e','f'};
//     printf("%d\n",sizeof(arr));//arr array name, 整个数组大小
//     printf("%d\n",sizeof(arr+0));//首元素地址
//     printf("%d\n",sizeof(*arr));//首元素
//     printf("%d\n",sizeof(arr[1]));//第二个元素
//     printf("%d\n",sizeof(&arr)); //数组真个元素的地址，但是还是地址
//     printf("%d\n",sizeof(&arr +1));//取出整个数组的地址后加一，是跳过整个数组后的地址，但还是地址
//     printf("%d\n",sizeof(&arr[0] +1)); //第一个元素的地址后加一，得到第二个元素的地址，但还是地址
//         return 0;
// }
#include <string.h>
// int main()
// {
//     char arr[] ={'a','b','c','d','e','f'};

//     printf("%d\n", strlen(arr)); // arr 表示首元素地址，strlen 遇到‘\0’stop，所以得到随机值
//     printf("%d\n", strlen(arr +0));// 跟上面一样
//     printf("%d\n", strlen(*arr)); //arr 表示首元素地址,strlen 必须接收的是首元素地址。char*  这里*arr 传参错误
//     printf("%d\n", strlen(arr[1]));//第一个元素的长度，跟上面一样是错误的
//     printf("%d\n", strlen(&arr));// &arr show整个数组的地址, 也是从第一个元素的地址。strlen 遇到‘\0’stop，所以也是随机值
//     printf("%d\n", strlen(&arr +1));//随机值
//     printf("%d\n", strlen(&arr[0] + 1));//从第二个元素向后数，遇到‘\0’stop

//     return 0;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     printf("%d\n",sizeof(arr));//7 '\0' include
//     printf("%d\n",sizeof(arr+0));//arr 首元素地址， 所以得到4/8
//     printf("%d\n",sizeof(*arr));//首元素 1
//     printf("%d\n",sizeof(arr[1]));//第二个元素 1
//     printf("%d\n",sizeof(&arr)); //数组真个元素的地址，但是还是地址 4/8
//     printf("%d\n",sizeof(&arr +1));//取出整个数组的地址后加一，是跳过整个数组后的地址，但还是地址 4/8
//     printf("%d\n",sizeof(&arr[0] +1)); //第一个元素的地址后加一，得到第二个元素的地址，但还是地址 4/8

//     return 0;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     //sizeof 是操作符，只关注占用内存空间的大小，不在乎内存中放的是什么
//     //strlen 是库函数，只针对字符串，strlen 遇到‘\0’stop，计算’\0'前元素的个数

//     printf("%d\n", strlen(arr)); // arr 表示首元素地址，strlen 遇到‘\0’stop，计算’\0'前元素的个数。所以得到 6
//     printf("%d\n", strlen(arr +0));// 跟上面一样
//     printf("%d\n", strlen(*arr)); //arr 表示首元素地址,strlen 必须接收的是首元素地址。char*  这里*arr 传参错误
//     printf("%d\n", strlen(arr[1]));//第一个元素的长度，跟上面一样是错误的
//     printf("%d\n", strlen(&arr));// &arr show整个数组的地址, 也是从第一个元素的地址。strlen 遇到‘\0’stop，所以 6
//     printf("%d\n", strlen(&arr +1));// ‘\0' 跳过， 还是数组指针，得到的是随机值
//     printf("%d\n", strlen(&arr[0] + 1));//从第二个元素向后数，遇到‘\0’stop 5

//     return 0;
// }
// int main()
// {
//     char* p = "abcdef";// 把首元素的地址放在p中
//     printf("%d\n",sizeof(p));// 4/8
//     printf("%d\n",sizeof(p+ 1));//b元素的地址， 所以得到4/8
//     printf("%d\n",sizeof(*p));//‘a'首元素 1
//     printf("%d\n",sizeof(p[0]));// p[0] = *(p+0) 表示第一个元素‘a' 1
//     printf("%d\n",sizeof(&p)); // 4/8
//     printf("%d\n",sizeof(&p +1));//跳过 p 所指的指针 得到 4/8
//     printf("%d\n",sizeof(&p[0] +1)); //4/8


//     printf("%d\n", strlen(p)); 6
//     printf("%d\n", strlen(p + 1));// 5
//     printf("%d\n", strlen(*p)); //char*  这里*p 传参错误
//     printf("%d\n", strlen(p[0])); //err
//     printf("%d\n", strlen(&p));// 随机值
//     printf("%d\n", strlen(&p +1));// 随机值
//     printf("%d\n", strlen(&p[0] + 1));//5 p[0]表示第一个元素，&p[0]表示第一个元素的地址

//     return 0;
// }
// int main()
// {
//     int a[3][4] = {0};// 把首元素的地址放在p中
//     printf("%d\n",sizeof(a));// 3*4*4 数组名表示整个数组
//     printf("%d\n",sizeof(a[0][0]));// 4
//     printf("%d\n",sizeof(a[0]));//4*4 a[0]表示第一行的数组名，a[1]表示第二行的数组名
//     printf("%d\n",sizeof(a[0] + 1));// 4*4 a[0]表示第一行第一个第一个元素的地址， 所以真个表示第一行第二个元素的地址。因为这里不是单独的数组名出现，所以这里a[0]不表示整个一行的数组名
//     printf("%d\n",sizeof(*(a[0] + 1))); // 4
//     printf("%d\n",sizeof(a + 1));// a 是首元素的地址，二维数组的首元素是他的第一行，所以a是第一行的地址，所以a+1 表示第二个行的地址，所以4/8
//     printf("%d\n",sizeof(*(a + 1))); //4*4
//     printf("%d\n",sizeof(&a[0] + 1)); //a[0]第一行的数组名，&a[0]表示第一行的地址，加1 表示第二行的地址。 4/8
//     printf("%d\n",sizeof(*(&a[0] + 1))); //第二行的元素，4*4
//     printf("%d\n",sizeof(*a)); // 4*4 a表示首元素的地址，对于二维数组的首元素表示第一行。
//     printf("%d\n",sizeof(a[3])); //a[3]表示第四行的数组名，这里不算越界，只是计算一下他的大小

//     return 0;
// }
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     int* ptr = (int*)(&a + 1);
//     printf("%d %d", *(a +1),*(ptr -1));
//ptr -1 表示减去一个ptr对应类型的大小，这里是int
//     return 0;
// }
// struct Test
// {
//     int Num;
//     char* pcName;
//     short sDate;
//     char cha[2];
//     short sBa[4];
// }*p; //除了p剩下的部分合起来叫结构体指针
// //假设p的值为0x100000.如下表达式的值分别代表多少？
// //结构体test类型的变量大小是20个字节
// int main()
// {
//     printf("%p\n",p+0x1);// 0x1表示16进制的1. 结构体指针加1跳过一个结构体， 0x100000+16进制20
//     printf("%p\n",(unsigned long)p+0x1);
//     // p被转换成整数，  0x100000转换成十进制是1，048，576，加1得到1，048，577， 再转换成16进制 0x100001
//     printf("%p\n",(unsigned int*)p+0x1);
//     // p被转换成整型指针， 整型指针加1表示跳过一个整型大小， 一个long整型大小是4. 
//     return 0;
// }
// int main()
// {
//     int a[4] = {1,2,3,4};
//     int* ptr1 = (int*)(&a +1);
//     //整个数组的地址加1后的地址是ptr1
//     int* ptr2 = (int*)((int)a + 1);
//     //首元素的地址被转换成int, 再加1后再强行转换成整型指针，得到ptr2
//     //小端存储，倒着存， 01 00 00 00  02 00 00 00   03 00 00 00  04 00 00 00
//     // +1 后得到的是小端存储的 所以实际数是02 00 00 00，16进制转换成10进制 
//     printf("%x,%x", ptr1[-1], *ptr2);
//     return 0;
// }
// int main()
// {
//     int a[3][2] = {(0,1),(2,3),(4,5)};
//     // (0,1)是逗号表达式，表示1， 二维数组初始化用的是{0,1}
//     //所以这里是a ={{1,3},{5,0},{0,0}} 不够的数用0补齐
//     int* p;
//     p = a[0];//a[0]表示第一行的数组名，表示首元素的地址，p= &a[0][0]
//     printf("%d", p[0]);
//     return 0;
// }
// int main()
// {
//     int a[5][5];
//     // ▪️▪️▪️▪️▪️ ▪️▪️▪️▪️▪️ ▪️▪️▪️▪️▪️ ▪️▪️▪️▪️▪️ ▪️▪️▪️▪️▪️
//     //   0    1     2      3    4

//     int(*p)[4];
//     p = a;//a首元素的地址 int (*) [5]，即a第一行元素的地址。  虽然不等，但是p还是指向第一个元素位置
//     printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
//     // &p[4][2]：p[4][2] = *（*（p+4）+ 2）
//      //p+4 ： p表示一行为4个整型的地址，所以+1 会跳过4个整型
//      //*（p+4）相当于拿到第5行数组名， 再加2 ， 再解引用得到a[3][2]
//     //&a[4][2]表示第四行第二列元素的地址

//     //得到-4 %p表示以地址的形式打印，打印内存的补码，直接将反码翻译成16进制表示的地址
//     //源码：10000000 0000
//     return 0;
// }
int main()
{
    int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10};
    int* ptr2 = (int*)(*(aa+1));
    //*(aa+1) 表示第二行所有元素，所以 也可以说是第二行的数组名，也就是第二行第一个元素的地址， 

}

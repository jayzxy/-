#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	//取出d的地址存放在pd里面 即pd为指针变量存放地址
//	/**pd = 5.5;*/
//	/*解地址操作符通过*pd找到d*/
//	//printf("%lf\n", d);/*打印d和*pd结果一样*/
//	//printf("%LF\n", *pd);
//	printf("%d\n", sizeof(pd));
//	//32位平台上占4个字节 64位占8个字节打印一下pd所占的字节
//
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeofshort));
//
//	在32位中打印出来都是4个字节*/
//}
//
////结构体
struct Book
{
	char name[20]; /*C语言程序设计*/
	short price; /*价格55*/

		/*创建一个结构体类型*/

};
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	/*struct Book* pb = &b1;*/ /*struct Book*是指针类型 变量是pb*/
	/*利用pb打印出我的书名和价格*/
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	/*结构体变量.成员
    结构体变量->成员*/
	//	printf("%s\n",pb->name);
	//printf("%d\n", pb->price);
	strcpy(b1.name, "C++");
	printf("%s\n", b1.name);
	/* 书名必须要利用strcpy才能改掉，*/

//printf("书名:%s\n", b1.name);
//printf("价格:%d元\n", b1.price);
//b1.price = 15;
//printf("修改后的价格:%d\n", b1.price);
//	return 0;
/*}利用结构体类型创建一个该类型的结构体变量*/


//结构体关键字

	





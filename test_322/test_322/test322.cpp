#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//判断一个数是否为奇数；输出1——100之间的奇数

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//
//	{
//		if (i % 2 != 0)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//
//			printf("%d\n", i);
//			i++;
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int day = 0;
//
//	scanf("%d", &day);
//	switch (day)
//
//	{
//	case 1:
//			printf("星期一\n");
//			break;
//	case 2:
//				printf("星期二\n");
//				break;
//	case 3:
//					printf("星期三\n");
//					break;
//	case 4:
//						printf("星期四\n");
//						break;
//	case 5:
//		printf("星期五\n");
//							break;
//	case 6:
//								printf("星期六\n");
//								break;
//	case 7:
//									printf("星期天\n");
//									break;
//
//	}
//
//	return 0;
//}
//利用switch分支语句 switch（整形表达式）；
//{
//				 语句项;   (case 整形常量表达式)
//								语句;
//}
//int main()
// {
//    int day = 0;
//    scanf_s("%d\ ",&day); 
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("工作日\n");
//        break;
//    case 6:
//    case 7:
//        printf("休息日\n");
//        break;
//    default:
//        printf("输入错误\n");
//    } 当出入的常量不在范围内时 可执行default
//    return 0;
//   当case重复较多时 即可以省略掉printf;break 只需要在结束时候输出printf break
//}
int main()
{ 
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1: m++;
	case 2: n++;
	case 3:
		switch (n)
			/*switch允许嵌套使用*/
		{case 1:
			n++;
		case 2:m++;
			n++;
			break;

		}
	case 4:m++;
		break;
	default:
		break;



	}
	printf("m=%d , n=%d\n", m, n);
	return 0;
}
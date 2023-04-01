#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])/*  当k=arr i  时就会运行找到了，break结束代码*/
//
//		{  
//			printf("找到了，下标是:%d\n", i);
//		break;
//		}
//	}
//	if (i == sz)   /*因为i只能<sz 所以i==sz时 说明数组中没有对应k的值*/
//	printf("找不到\n");
//	return;

/*} 在一个有序数组中查找某个具体数字 用下标查找*/



//利用二分查找法|折半查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);  /*计算数组中的元素个数*/
//	int left = 0;         /*左下标*/
//	int right = sz - 1; /*右下标*/
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;/*计算左右下标的中间值*/
//		if (arr[mid] > k)
//		{
//			right = mid - 1;  /*1 .如果中间元素>k 那么左下标不变 右下标 是 中间值mid-1*/
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;   /*2. 如果中间元素<k 那么右下标不变 左下标 是中间值 mid +1*/
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//		if (left > right) /*3 . left= right ,且不等于k时 arr中 无对应元素 因为while条件为（left<=right）*/
//		{
//			printf("找不到\n");
//
//		}   /* 一共三种情况 */
//	}
//		return 0;
//}

//编写代码演示多个字符从两端移动向中间汇集
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to sichuan !!!!!";
//	char arr2[] = "????????????????????????";
//	int left = 0;
//	int right = strlen(arr1) - 1;  /* strlen 计算字符串的长度*/    /*int righ = sizeof(arr1)/sizeof(arr1[0])-2*/
//     while (left<=right)  /*当条件成立时 left与right 相交的时候即是代码运行完*/
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  /*slepp让代码停留1秒*/
//		left++;
//		right--;	
//	}
//	 system("cls"); /*执行系统命令的一个函数 cls 清空屏幕*/
//		printf("%s\n", arr2); 
//	return 0;
//
//}
 /*编写代码实现 模拟用户输入密码登录的情景 ，并且只能登三次 
 （只允许输入三次密码 如果密码正确则提示登陆成功，
 如果三次都输入错误，则退出程序）*/
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)  /*if(password="123456")=不能用来比较两个字符串是否相等应该使用库函数strcmp*/
		{   /*strcmp 是用来比较两个字符串 相等则返回0；如果第一个大于第二个则返回一个大于0的数 如果第一个小于第二个则返回一个小于0的数*/
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
		if (i == 3)
			printf("三次密码均错误,退出程序\n");
		return 0;
}

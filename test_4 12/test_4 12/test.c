#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
  编写程序数一下1到100的所有整数中出现多少个数字9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
	   if(i/10==9)   /*这里不能使用else 当i=99的时候只运行if代码，else无法运行；打印出错误答案19*/
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}


计算 1/1-2/1+3/1-4/1 ......+99/1-100/1的值  分数求和
int main()
{
	int i = 0;
	double sum = 0.0;   /*如果不加double类型，即商都为0，得不到小数*/
	int flag = 1;
	for (i = 1; i < 100; i++)
	{  
		sum = flag * 1.0 / i;  /*要得到小数点即必须有一个数为小数 因为i是长整形了 所以让1为1.0*/
		flag = -flag;   /*在flag前面加-即可完成一减一加的分数求和*/
	}
	printf("%lf\n", sum);
	return 0;
}

求10个整数的最大值
int main()
{ 
	int arr[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	 int max= arr[0];  /*这里不能写成 int max=0， 如果是负数就无法求出最大值*/
	 int i = 0;
	int sz= sizeof(arr)/sizeof (arr[0]);
	 for (i = 1; i < sz; i++)
	 {
		 if (arr[i] > max)
		 {
			 max = arr[i];
		 }
	 }
	 printf("max =%d\n", max);

	 return 0;
}


在屏幕上输出9*9乘法口诀表
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++) /* 确定打印9行*/
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
			printf("\n");
	}
	return 0;
}





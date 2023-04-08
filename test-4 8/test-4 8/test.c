#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
写一个代码将三个数按照从大到小输出
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a,&b,&c);
	/*算法实现在a中放最大值 ，b次之，c最小*/
	if (a < b)
	{
		int mmp = a;
		a = b;
		b = mmp;
	}
	if (a < c)
	{
		int mmp = a;
		a = c;
		c = mmp;
	}
	if (b < c)
	{
		int mmp = b;
		b = c;
		c = mmp;
	}
	printf("%d%d%d\n",a, b, c);  /*%d中输入的什么 打印出来的时候也要输入一样的*/
	return 0;
}

写一个代码打印1到100之间所有3的倍数的数字
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;
}


给两个数求这两个数的最大公约数
int main()    /*辗转相除法*/
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r = m %  n)  /* m% n为0时，跳出循环; while为真运行 为假停止 非0为真 0为假*/
	{
		               /*  < --r = m % n;可以省略输入在while条件句里面 */   
		m = n;      
		n = r;      /*n = r 使再次循环，至m%n为0*/
	}                
	printf("%d\n", n);
	return 0;
}

写一个代码打印闰年,1000年到2000年之间的闰年
int main()
{  
	int year = 0;
	int count = 0;  /*用来统计有多少个闰年*/
	for (year = 1000; year <= 2000; year++)
	{
		/*判断year是否为闰年；
			1. 能被4整除并且不能被100整除的是闰年；
			2. 能被400整除的*/
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}		
	printf("\n count = %d\n", count);
	return 0;
}
 
简单方法
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}printf("\n count = %d\n", count);
return 0;
}


写一个代码，打印100 到 200之间的素数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		/*判断素数（只能被1和他本身整除的是素数）
			试除法 产生 2—— i-1的数*/
		int j = 0;
		for (j = 2; j < i; j++)   
		{
			if (i % j == 0)  /*j把i整除 即此时的i不是素数*/
				break;
		}
		if (j == i)   /*当j<i不再满足循环，即2——i-1的数都没把i整除 这种情况即一定是素数*/
		{
			count++;
			printf("%d ",i);
		}
	} 
	printf("\n count = %d\n", count);
	return 0;
}

第二种方法
i= a*b （a或b中至少有一个数字<=开平方i）
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++)  
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)   //如果i能被j整除，即i不是素数  sqrt是开平方数学库函数 #include<math.h>
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))  /*如果i不能被j整除，i是素数*/
		{
			count++;
			printf("%d ", i);
		}
			
	}       
		printf("\n count=%d\n", count);
	return 0;
}

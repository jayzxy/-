#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 1;
	int n = 0;
	int set = 1;
	scanf("%d ", &n);
	for (i = 1; i <= n; i++)
	{
		set = set * i;
		printf("set=%d\n", set);
	}
	

	return 0;
}     /*计算n的阶乘*/

int main()
{   
    int i = 0;
    int n = 0;
    int ret = 1;
    int num = 0;
    for (n = 1; n<=10; n++)
    {
        ret = 1;
        for (i = 1; i <= n; i++)

            
        /* 这里加上一个ret = 1，防止上次运行留下的阶乘与现在运行的阶乘再次运算*/
        {
            ret = ret * i; /*不能把tet = 1加入这里否则会不运算3的阶乘*/
        }
        num = num + ret;
    }
    printf("num = %d\n", num);   
    return 0;
} /*计算 1 到10的阶乘*/
 
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;

    for (n = 1; n <= 3; n++)
    {
        ret = ret * n;
        sum = sum + ret;

    }
    printf("sum=%d\n", sum);
}
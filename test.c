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
}     /*����n�Ľ׳�*/

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

            
        /* �������һ��ret = 1����ֹ�ϴ��������µĽ׳����������еĽ׳��ٴ�����*/
        {
            ret = ret * i; /*���ܰ�tet = 1�����������᲻����3�Ľ׳�*/
        }
        num = num + ret;
    }
    printf("num = %d\n", num);   
    return 0;
} /*���� 1 ��10�Ľ׳�*/
 
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
  ��д������һ��1��100�����������г��ֶ��ٸ�����9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
	   if(i/10==9)   /*���ﲻ��ʹ��else ��i=99��ʱ��ֻ����if���룬else�޷����У���ӡ�������19*/
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}


���� 1/1-2/1+3/1-4/1 ......+99/1-100/1��ֵ  �������
int main()
{
	int i = 0;
	double sum = 0.0;   /*�������double���ͣ����̶�Ϊ0���ò���С��*/
	int flag = 1;
	for (i = 1; i < 100; i++)
	{  
		sum = flag * 1.0 / i;  /*Ҫ�õ�С���㼴������һ����ΪС�� ��Ϊi�ǳ������� ������1Ϊ1.0*/
		flag = -flag;   /*��flagǰ���-�������һ��һ�ӵķ������*/
	}
	printf("%lf\n", sum);
	return 0;
}

��10�����������ֵ
int main()
{ 
	int arr[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	 int max= arr[0];  /*���ﲻ��д�� int max=0�� ����Ǹ������޷�������ֵ*/
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


����Ļ�����9*9�˷��ھ���
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++) /* ȷ����ӡ9��*/
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





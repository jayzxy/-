#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
дһ�����뽫���������մӴ�С���
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a,&b,&c);
	/*�㷨ʵ����a�з����ֵ ��b��֮��c��С*/
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
	printf("%d%d%d\n",a, b, c);  /*%d�������ʲô ��ӡ������ʱ��ҲҪ����һ����*/
	return 0;
}

дһ�������ӡ1��100֮������3�ı���������
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


�����������������������Լ��
int main()    /*շת�����*/
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r = m %  n)  /* m% nΪ0ʱ������ѭ��; whileΪ������ Ϊ��ֹͣ ��0Ϊ�� 0Ϊ��*/
	{
		               /*  < --r = m % n;����ʡ��������while���������� */   
		m = n;      
		n = r;      /*n = r ʹ�ٴ�ѭ������m%nΪ0*/
	}                
	printf("%d\n", n);
	return 0;
}

дһ�������ӡ����,1000�굽2000��֮�������
int main()
{  
	int year = 0;
	int count = 0;  /*����ͳ���ж��ٸ�����*/
	for (year = 1000; year <= 2000; year++)
	{
		/*�ж�year�Ƿ�Ϊ���ꣻ
			1. �ܱ�4�������Ҳ��ܱ�100�����������ꣻ
			2. �ܱ�400������*/
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
 
�򵥷���
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


дһ�����룬��ӡ100 �� 200֮�������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		/*�ж�������ֻ�ܱ�1����������������������
			�Գ��� ���� 2���� i-1����*/
		int j = 0;
		for (j = 2; j < i; j++)   
		{
			if (i % j == 0)  /*j��i���� ����ʱ��i��������*/
				break;
		}
		if (j == i)   /*��j<i��������ѭ������2����i-1������û��i���� ���������һ��������*/
		{
			count++;
			printf("%d ",i);
		}
	} 
	printf("\n count = %d\n", count);
	return 0;
}

�ڶ��ַ���
i= a*b ��a��b��������һ������<=��ƽ��i��
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++)  
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)   //���i�ܱ�j��������i��������  sqrt�ǿ�ƽ����ѧ�⺯�� #include<math.h>
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))  /*���i���ܱ�j������i������*/
		{
			count++;
			printf("%d ", i);
		}
			
	}       
		printf("\n count=%d\n", count);
	return 0;
}

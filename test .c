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
//		if (k == arr[i])/*  ��k=arr i  ʱ�ͻ������ҵ��ˣ�break��������*/
//
//		{  
//			printf("�ҵ��ˣ��±���:%d\n", i);
//		break;
//		}
//	}
//	if (i == sz)   /*��Ϊiֻ��<sz ����i==szʱ ˵��������û�ж�Ӧk��ֵ*/
//	printf("�Ҳ���\n");
//	return;

/*} ��һ�����������в���ĳ���������� ���±����*/



//���ö��ֲ��ҷ�|�۰���ҷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);  /*���������е�Ԫ�ظ���*/
//	int left = 0;         /*���±�*/
//	int right = sz - 1; /*���±�*/
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;/*���������±���м�ֵ*/
//		if (arr[mid] > k)
//		{
//			right = mid - 1;  /*1 .����м�Ԫ��>k ��ô���±겻�� ���±� �� �м�ֵmid-1*/
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;   /*2. ����м�Ԫ��<k ��ô���±겻�� ���±� ���м�ֵ mid +1*/
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//		if (left > right) /*3 . left= right ,�Ҳ�����kʱ arr�� �޶�ӦԪ�� ��Ϊwhile����Ϊ��left<=right��*/
//		{
//			printf("�Ҳ���\n");
//
//		}   /* һ��������� */
//	}
//		return 0;
//}

//��д������ʾ����ַ��������ƶ����м�㼯
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to sichuan !!!!!";
//	char arr2[] = "????????????????????????";
//	int left = 0;
//	int right = strlen(arr1) - 1;  /* strlen �����ַ����ĳ���*/    /*int righ = sizeof(arr1)/sizeof(arr1[0])-2*/
//     while (left<=right)  /*����������ʱ left��right �ཻ��ʱ���Ǵ���������*/
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  /*slepp�ô���ͣ��1��*/
//		left++;
//		right--;	
//	}
//	 system("cls"); /*ִ��ϵͳ�����һ������ cls �����Ļ*/
//		printf("%s\n", arr2); 
//	return 0;
//
//}
 /*��д����ʵ�� ģ���û����������¼���龰 ������ֻ�ܵ����� 
 ��ֻ���������������� ���������ȷ����ʾ��½�ɹ���
 ������ζ�����������˳�����*/
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)  /*if(password="123456")=���������Ƚ������ַ����Ƿ����Ӧ��ʹ�ÿ⺯��strcmp*/
		{   /*strcmp �������Ƚ������ַ��� ����򷵻�0�������һ�����ڵڶ����򷵻�һ������0���� �����һ��С�ڵڶ����򷵻�һ��С��0����*/
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
		if (i == 3)
			printf("�������������,�˳�����\n");
		return 0;
}

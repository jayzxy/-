#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ж�һ�����Ƿ�Ϊ���������1����100֮�������

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
//			printf("����һ\n");
//			break;
//	case 2:
//				printf("���ڶ�\n");
//				break;
//	case 3:
//					printf("������\n");
//					break;
//	case 4:
//						printf("������\n");
//						break;
//	case 5:
//		printf("������\n");
//							break;
//	case 6:
//								printf("������\n");
//								break;
//	case 7:
//									printf("������\n");
//									break;
//
//	}
//
//	return 0;
//}
//����switch��֧��� switch�����α���ʽ����
//{
//				 �����;   (case ���γ�������ʽ)
//								���;
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
//        printf("������\n");
//        break;
//    case 6:
//    case 7:
//        printf("��Ϣ��\n");
//        break;
//    default:
//        printf("�������\n");
//    } ������ĳ������ڷ�Χ��ʱ ��ִ��default
//    return 0;
//   ��case�ظ��϶�ʱ ������ʡ�Ե�printf;break ֻ��Ҫ�ڽ���ʱ�����printf break
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
			/*switch����Ƕ��ʹ��*/
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
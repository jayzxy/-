#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <string.h>
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	//ȡ��d�ĵ�ַ�����pd���� ��pdΪָ�������ŵ�ַ
//	/**pd = 5.5;*/
//	/*���ַ������ͨ��*pd�ҵ�d*/
//	//printf("%lf\n", d);/*��ӡd��*pd���һ��*/
//	//printf("%LF\n", *pd);
//	printf("%d\n", sizeof(pd));
//	//32λƽ̨��ռ4���ֽ� 64λռ8���ֽڴ�ӡһ��pd��ռ���ֽ�
//
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeofshort));
//
//	��32λ�д�ӡ��������4���ֽ�*/
//}
//
////�ṹ��
struct Book
{
	char name[20]; /*C���Գ������*/
	short price; /*�۸�55*/

		/*����һ���ṹ������*/

};
int main()
{
	struct Book b1 = { "C���Գ������",55 };
	/*struct Book* pb = &b1;*/ /*struct Book*��ָ������ ������pb*/
	/*����pb��ӡ���ҵ������ͼ۸�*/
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	/*�ṹ�����.��Ա
    �ṹ�����->��Ա*/
	//	printf("%s\n",pb->name);
	//printf("%d\n", pb->price);
	strcpy(b1.name, "C++");
	printf("%s\n", b1.name);
	/* ��������Ҫ����strcpy���ܸĵ���*/

//printf("����:%s\n", b1.name);
//printf("�۸�:%dԪ\n", b1.price);
//b1.price = 15;
//printf("�޸ĺ�ļ۸�:%d\n", b1.price);
//	return 0;
/*}���ýṹ�����ʹ���һ�������͵Ľṹ�����*/


//�ṹ��ؼ���

	





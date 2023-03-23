#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void test()
//{
//	int a = 1;
//		a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int ADD(int x, int y)
//{
//	int u = 0;
//		u = x + y;
//
//
//	return u;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum = %d\n",sum);
//	return;
//
//
//}


//int main()
//{
//	int a = 10;
//	int b = a+= 10;
//
//	printf("%d\n", b);
//}

//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//}


//int ADD(int x, int y)
//{
//	int I = x + y;
//	return I;
//
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Z = 0;
//
//	Z = ADD(a, b);
//	printf("Z=%d\n", Z);
//	return 0;
//		
//
////}
int ZXY(int x,int y)

{
	int P = x * y;
      return P;


}


int main()
{
	int a = 90;
	int b = 100;
	int Z = ZXY(a,b);
	printf("Z=%d\n", Z);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include <stdio.h>



int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c ','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
} 
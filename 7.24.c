#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2]- &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
////}
//int main()
//{
//	unsigned long pu[] = { 6,7,8,9,10 };
//	unsigned long* pi;
//	pi = pu;
//	*(pi + 3) += 3;
//	printf("%d ,%d\n", *pi, *(pi + 3));
//	return 0;
//}
//#include<string.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//
//		char tmp =*left;
//	*left =*right;
//	*right = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i*2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//			str++;
//	}
//	return count;
//}
//int main()
//{
//	/*int len = my_strlen("abcdef");
//	printf("%d\n", len);*/
//
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}
//#include<assert.h>
//char* my_stycop(char* dest, const char* str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	char* len = dest;
//	while (*dest++=*str++)
//	{
//		;
//	}
//	return len;
//} 
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = "bit";
//	my_stycop(arr, arr1);
//	printf("%s\n", arr);
//	return 0;
//}
#include<string.h>
#include<assert.h>
char* my_strcat(char* str, const char* dest)
{
	char ret = str;
	assert(str != NULL);
	assert(dest != NULL);
	while (*str)
	{
		str++;
	}
	while (*str++ = *dest++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[] = {"abcd"};
	char arr1[] = { "ef" };
	my_strcat(arr, arr1);
	printf("%s\n", arr);
	return 0;

}
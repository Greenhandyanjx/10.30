#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<assert.h>
int main()
{
	int a = 0, b = 0, i = 0,j=0,n=0;
	scanf("%d", &a);
		for (j = 0; j < a; j++)
		{
			for (n = 0; n < a; n++)
			{
				i++;
				printf("%02d", i);
			}
			printf("\n");
		}
		printf("\n");
		i = 0;
		for (j = 0; j < a; j++)
		{
			for (n = 0; n < a; n++)
			{
				if (n < a - 1 - j)
					printf("  ");
				else
				{
					i++;
					printf("%02d", i);
				}
			}
			printf("\n");
		}
	return 0;
}
	//int a = 0, b = 0, arr[10000],n=0,i=0,m=0,x=0;
	//scanf("%d", &a);
	//for (n = 2; n < 100000; n++)
	//{
	//	for (b = 2; b < n; b++)
	//	{
	//		if (n % b == 0)
	//			break;
	//	}
	//	if (n == b)
	//	{
	//		arr[i] = n;
	//		i++;
	//	}
	//}
	//for ( m= 0; m<i; m++)
	//{
	//	if (a % arr[m] == 0)
	//	{
	//		x = a / arr[m];
	//		break;
	//	}
	//}
	//printf("%d", x);
	//int a = 0, arr[10000], b = 0, n = 0, count = 1,ret1=0,ret2=0;
	//scanf("%d", &n);
	//for (a = 0; a < n; a++)
	//{
	//	scanf("%d", &b);
	//	arr[a] = b;
	//}
	//for (a = 0; a < n; a++)
	//{
	//	if (arr[a] - arr[a + 1] == -1)
	//	{
	//		count++;
	//	}
	//	else
	//	{
	//		ret1 = count;
	//		if (ret1 < ret2)
	//		{
	//			ret1 = ret2;
	//		}
	//		ret2 = ret1;
	//		count = 1;
	//	}
	//}
	//printf("%d", ret2);
//高精度加法和乘法
//char* multiply(const char* num1, const char* num2)
//{
//    int la, lb, lc;
//    int a[2001] = { 0 };
//    int b[2001] = { 0 };
//    int c[2001] = { 0 };
//    la = strlen(num1);
//    lb = strlen(num2);
//    //1.将数组数据倒过来储存
//    for (int i = 0; i < la; i++)
//    {
//        a[la - i - 1] = num1[i] - '0';
//    }
//    for (int i = 0; i < lb; i++)
//    {
//        b[lb - i - 1] = num2[i] - '0';
//    }
//    lc = la + lb;
//    //2.进制的转换
//    for (int i = 0; i < la; i++)
//    {
//        for (int j = 0; j < lb; j++)
//        {
//            c[i + j] += a[i] * b[j];
//            c[i + j + 1] += c[i + j] / 10;
//            c[i + j] %= 10;
//        }
//    }//3.去除后面面的无数据部分
//    //4.函数会销毁最后的结果,所以创建动态数组使用malloc储存结果
//    while (c[lc] == 0 && lc > 0)lc--;
//    char* re = (char*)malloc(sizeof(char) * (lc + 2));
//    //5.将结果倒回来
//    for (int i = lc; i >= 0; i--) {
//        re[lc - i] = c[i] + '0';
//    }
//    re[lc + 1] = 0;
//    return re;
//}
////加法同理
//char* my_sum(const char* x, const char* y)
//{
//    int a[2001] = { 0 }, b[2001] = { 0 }, c[2001] = {0},n=0,m=0,k=0,o=0,p=0;
//    n = strlen(x);
//    int ret = 0;
//    m = strlen(y);
//    for (int i = 0; i < n; i++)
//    {
//        a[n - i - 1] = x[i]-'0';
//    }
//    for (int i = 0; i < m; i++)
//    {
//        b[m - 1 - i] = y[i]-'0';
//    }
//    for (int i = 0; i < n+1||i<m+1; i++)
//    {
//        if (i<n+1&&i<m+1)
//            c[i] = a[i] + b[i]+ret;
//        else if (i>=n+1 && i<m+1)
//            c[i] = b[i]+ret;
//        else if (i<n+1 && i>=m+1)
//            c[i] = a[i]+ret;
//        ret = c[i] / 10;
//        c[i] = c[i] % 10;
//    }
//    int lc = n + m;
//    while (c[lc] == 0 && lc > 0)lc--;
//    char* re = (char*)malloc(sizeof(char) * (lc + 2));
//    for (int i = lc; i >= 0; i--) {
//        re[lc - i] = c[i] + '0';
//    }
//    re[lc + 1] = 0;
//    return re;
//}
//int main() {
//    char num1[201];
//    char num2[201];
//    scanf("%s", num1);
//    scanf("%s", num2);
//    char* ret = multiply(num1, num2);
//    printf("%s", ret);
//    return 0;
//}
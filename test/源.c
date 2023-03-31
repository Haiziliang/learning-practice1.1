#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i, s;
//	for (i = 0, s = 0; i < 101; i++)
//	{
//		s += i;
//	}
//	printf("%d", s);
//	return 0;
//}
////十个数求最大值
//
//#include<stdio.h>
//int main()
//{
//	int i;
//	int arr[10] = { 1,2,45,6,3,2,33,64,10 };
//	int max = arr[0];
//	for (i=0; i < 10; i++)
//	{
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("这组数据的最大值为%d", max);
//	return 0;
//}
////比较最大值（个数自定）
//#include<stdio.h>
//int main()
//{
//	int i, n ,x;
//	int max;
//	printf("请输入您要比较的数值的个数：\n");
//	scanf("%d", &n);
//	printf("请输入数值：\n");
//	scanf("%d", &x);
//	max = x;
//	for (i = 0; i < n-1; i++)
//	{
//		scanf("%d", &x);
//		if (max < x) {
//			max = x;
//		}
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}
//n的阶乘
//#include<stdio.h>
//int main()
//{
//	int i,n;
//	int s=0;
//	printf("请输入n值：\n");
//	scanf("%d", &n);
//	for (i = 2,s=1; i < n + 1; i++)
//	{
//		s*= i;
//	}
//	printf("%d的阶乘为%d\n",n,s);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i,n= 0;
//	double s = 1;
//	printf("请输入n值：\n");
//	scanf("%d", &n);
//	for (i=2; i < n + 1; i++) {
//		s *= i;
//	}
//	printf("%d的阶乘是%.0lf\n", n, s);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("   *   \n");
//	printf("  ***  \n");
//	printf(" ***** \n");
//	printf("*******\n");
//	printf("*******\n");
//	printf(" ***** \n");
//	printf("  ***  \n");
//	printf("   *   \n");
//	return 0;
//}
// p104 三 4.
//#include<stdio.h>
//int main()
//{
//	int s, i;
//	for (s = 0, i = 1; i < 3; i++, s += i);
//	printf("%d", s);
//	return 0;
//}
////p103 三 5.
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0;
//	while (i < 20)
//	{
//		for (;;) {
//			if ((i % 10) == 0)
//				break;
//			else i--;
//		}
//		i += 11;
//		a += i;
//	}
//	printf("%d\n", a);
//	return 0;
//}
////计算1!+2!+···+10!
//#include<stdio.h>
//int main()
//{
//	int i;
//	double s = 0,n = 1;
//	for (i = 1; i <=10; i++ )
//	{
//		n *= i;
//		s += n;
//	}
//	printf("结果为%.0lf", s);
//	return 0;
//}
////两正整数的最大公约数（Greatest common divisor，GCD）和最小公倍数（Least Common Multiple，LCM）
//#include<stdio.h>
//void maxsort(int* m, int* n)
//{
//	int max = 0;
//	if (*m < *n) {
//		max = *n;
//		*n = *m;
//		*m = max;
//	}
//}
//int main()
//{
//	int m, n;
//	int LCM = 0;
//	int GCD = 0;
//	int r = 0;
//	printf("请输入两个正整数：\n");
//	scanf("%d%d", &m, &n);
//	maxsort(&m, &n);		//对m,n进行排序，m中放较大值，n中放最小值
//	////辗转相除法求GCD，后利用LCM=m*n/GCD
//	//int x = m * n;
//	//while (m % n) {
//	//	m = n;
//	//	n = m % n;
//	//}
//	//GCD = n;
//	//LCM = x / n;
//	////使用算法求出LCM
//	/*for (r = m;; r++)
//	{
//		if (r % m == 0 && r % n == 0) {
//			LCM = r;
//			break;
//		}
//	}*/
//	printf("这两个数的最大公约数为%d\n", GCD);
//	printf("这两个数的最小公倍数为%d\n", LCM);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	switch (i)
//	{
//	default:printf("%d\n", -1);
//	case 0:printf("%d\n", 0);
//	case 1:printf("%d\n", 1);
//	case 2:printf("%d\n", 2);
//	case 3:printf("%d\n", 3);
//	case 4:printf("%d\n", 4);
//	
//	}
//	return 0;
//}
////三个数按从小到大输出
//void trimax(int* a, int* b, int* c)
//{
//	if (a < b) {
//		int max = *b;
//		*b = *a;
//		*a = max;
//	}
//	if (a < c) {
//		int max = *c;
//		*c = *a;
//		*a = max;
//	}
//	if (b < c) {
//		int max = *c;
//		*c = *b;
//		*b = max;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	trimax(&a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
////打印3的倍数的数（1~100）
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int x = 1;
//	for (i = 0; i < 100; i++)
//	{
//		if (0 == x % 3) {
//			printf("%d\n", x);
//		}
//		x++;
//	}
//	printf("x=%d", x);
//	return 0;
//}

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
////ʮ���������ֵ
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
//	printf("�������ݵ����ֵΪ%d", max);
//	return 0;
//}
////�Ƚ����ֵ�������Զ���
//#include<stdio.h>
//int main()
//{
//	int i, n ,x;
//	int max;
//	printf("��������Ҫ�Ƚϵ���ֵ�ĸ�����\n");
//	scanf("%d", &n);
//	printf("��������ֵ��\n");
//	scanf("%d", &x);
//	max = x;
//	for (i = 0; i < n-1; i++)
//	{
//		scanf("%d", &x);
//		if (max < x) {
//			max = x;
//		}
//	}
//	printf("���ֵΪ%d\n", max);
//	return 0;
//}
//n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int i,n;
//	int s=0;
//	printf("������nֵ��\n");
//	scanf("%d", &n);
//	for (i = 2,s=1; i < n + 1; i++)
//	{
//		s*= i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n",n,s);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i,n= 0;
//	double s = 1;
//	printf("������nֵ��\n");
//	scanf("%d", &n);
//	for (i=2; i < n + 1; i++) {
//		s *= i;
//	}
//	printf("%d�Ľ׳���%.0lf\n", n, s);
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
// p104 �� 4.
//#include<stdio.h>
//int main()
//{
//	int s, i;
//	for (s = 0, i = 1; i < 3; i++, s += i);
//	printf("%d", s);
//	return 0;
//}
////p103 �� 5.
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
////����1!+2!+������+10!
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
//	printf("���Ϊ%.0lf", s);
//	return 0;
//}
////�������������Լ����Greatest common divisor��GCD������С��������Least Common Multiple��LCM��
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
//	printf("������������������\n");
//	scanf("%d%d", &m, &n);
//	maxsort(&m, &n);		//��m,n��������m�зŽϴ�ֵ��n�з���Сֵ
//	////շת�������GCD��������LCM=m*n/GCD
//	//int x = m * n;
//	//while (m % n) {
//	//	m = n;
//	//	n = m % n;
//	//}
//	//GCD = n;
//	//LCM = x / n;
//	////ʹ���㷨���LCM
//	/*for (r = m;; r++)
//	{
//		if (r % m == 0 && r % n == 0) {
//			LCM = r;
//			break;
//		}
//	}*/
//	printf("�������������Լ��Ϊ%d\n", GCD);
//	printf("������������С������Ϊ%d\n", LCM);
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
////����������С�������
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
////��ӡ3�ı���������1~100��
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

#define _CRT_SECURE_NO_WARNINGS
////第一个程序
//#include<stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	printf("你好 世界！\n海子亮加油！\n");
//	return 0;
//}
////做计算
////plus
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n",a,b,a+b);
//	return 0;
//}
////100元找零change
//#include<stdio.h>
//int main()
//{
//	int price = 0;
//	printf("请输入金额（元）：");
//	scanf("%ld", &price);
//	int change = 100 - price;
//	printf("找您%ld元。\n", change);
//}
////100元找零2change2
//#include<stdio.h>
//int main()
//{
//	const int AMOUNT = 100;
//	int price = 0;
//	printf("请输入金额（元）：");
//	scanf("%d", &price);
//	int change = AMOUNT - price;
//	printf("找您%d元。\n", change);
//	return 0
//}
////height2
//#include<stdio.h>
//int main()
//{
//	printf("请输入身高的英尺与英寸，"
//		"如输入\"5 7\"表示5英尺7英寸\n");
//	double foot;
//	double inch;
//	scanf("%lf %lf",&foot,&inch);
//	printf("身高是%f米。\n",
//		((foot + inch / 12) * 0.3048));
//	return 0;
//}
////average
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d %d", &a,&b);
//	double c = (a + b) / 2.0;
//	printf("%d和%d的平均值为%f\n",a,b,c);
//	return 0;
//}
////age
//#include<stdio.h>
//int main()
//{
//	const int MINOR = 35;
//	int age = 0;
//	printf("请输入您的年龄：");
//	scanf("%d", &age);
//	printf("您的年龄是%d岁。\n",age);
//		if (age < MINOR) {
//			printf("年轻时美好的\n");
//		}
//		printf("年龄决定了您的精神世界，好好珍惜吧。\n");
//		return 0;
//}
////change3
//#include<stdio.h>
//int main()
//{
//	//  初始化
//	int price = 0;
//	int bill = 0;
//	//  读入金额和票面
//	printf("请输入金额：");
//	scanf("%d", &price);
//	printf("请输入票面：");
//	scanf("%d", &bill);
//	//  计算找零
//	printf("应该找您：%d元\n", bill - price);
//	return 0;
//}
////change4
//#include<stdio.h>
//int main()
//{
//	//  初始化
//	int price = 0, bill = 0;
//	//  读入金额和票面
//	printf("请输入金额：");
//	scanf("%d", &price);
//	printf("请输入票面：");
//	scanf("%d", &bill);
//	//  计算找零
//	if (bill >= price) {
//		printf("应该找您%d元。\n", bill - price);
//	}
//	return 0;
//}
//// change5
//#include<stdio.h>
//int main()
//{
//	int price = 0, bill = 0;
//	printf("请输入金额：");
//	scanf("%d", &price);
//	printf("请输入票面：");
//	scanf("%d", &bill);
//	if (bill >= price) {
//		printf("应该找您：%d元\n", bill - price);
//	}
//	else {
//		printf("你的钱不够\n");
//	}
//	return 0;
//}
////interval2
//#include<stdio.h>
//int main()
//{
//	int hour1, minute1;
//	int hour2, minute2;
//	scanf("%d %d", &hour1, &minute1);
//	scanf("%d %d", &hour2, &minute2);
//	int ih = hour2 - hour1;
//	int im = minute2 - minute1;
//	if (im < 0) {
//		im = 60 + im;
//			ih--;
//	}
//	printf("时间差是%d时%d分\n", ih, im);
//	return 0;
//}
////max
////#include<stdio.h>
////int main()
////{
//	//  第一种	
//	int a, b;
//	printf("请输入两个整数：\n");
//	scanf("%d %d", &a, &b);
//	int max = b;
//	if (a > b) {
//		max = a;
//	}
//	//  第二种
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	int max = b;
//	if (a > b||c>b) {
//		if (a > c) {
//			max = a;
//		}
//		else {
//			max = c;
//		}
//	}
//	printf("较大数为%d。", max);
//	return 0;
//	}
//	// 逆序的三位数
//	#include<stdio.h>
//	int main()
//	{
//		int a = 0;
//		int b, c, d,e;
//		scanf_s("%d", &a);
//		b = a / 100;
//		d = a % 10;
//		c = a / 10 % 10;
//		e = d* 100 + c* 10 + b;
//		printf("%d", e);
//		return 0;
//	}
//	//salary
//	#include<stdio.h>
//	int main()
//	{
//		const double RATE = 8.25;
//		const int STANDARD = 40;
//		double pay = 0.0;
//		int hours;
//		printf("请输入工作的小时数：");
//		scanf("%d", &hours);
//		printf("\n");
//		if (hours > STANDARD)
//			pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
//		else
//			pay = hours * RATE;
//		printf("应付工资：%f元\n", pay);
//		return 0;
//	}
//	//判断成绩
//	#include<stdio.h>
//	int main()
//	{
//		const int PASS = 60;
//		int score;
//		printf("请输入成绩：");
//		scanf("%d", &score);
//		printf("你输入的成绩为%d\n", score);
//		if (score < PASS)
//			printf("很遗憾，这个成绩没有及格\n");
//		else
//			printf("祝贺你，这个成绩及格了。\n");
//		printf("再见");
//		return 0;
//	}
//	//数数几位数(正整数)
//	#include<stdio.h>
//	int main()
//	{
//		int x = 0;
//		int n = 0;
//		scanf("%d", &x);
//		n++;
//		x /= 10;
//		while (x > 0) {
//			n++;
//			x /= 10;
//		}
//		printf("%d", n);
//		return 0;
//	}
//	//数数几位数(非负数)
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int n = 0;
//	scanf("%d", &x);
//	do {
//		n = n + 1;
//		x = x / 10;
//	}
//
//	while (x > 0);
//	printf("%d", n);
//	return 0;
//}
//	//BMI计算器
//#include<stdio.h>
//int main()
//{
//	double height = 0,weight = 0;
//	int sex = 0;
//	printf("请输入您的性别：（1代表男性0代表女性）");
//	scanf("%d", &sex);
//	printf("请输入您的身高（米）与体重（公斤）。例如：输入 1.7 70 表示1.7米与70公斤");
//		scanf("%lf %lf",height,weight);
//		if (sex = 0) {
//
//		}
//		printf("您输入的数值为%f %f".height, weight);
//		int bmi;
//		bmi = weight / (height * height);
//		printf("您的BMI为%f");
//		if(bmi>)
//
//	return 0;
//}
////n的阶乘（正整数）
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int fact = 1;
//	int i = 1;
//	while (i <= n) {
//		fact = fact * i;
//		i = i + 1;
//	}
//	printf("%d!=%d", n, fact);
//	return 0;
//}
////n的阶乘（非负整数）
//#include<stdio.h>
//int mian()
//{
//	int n;
//	scanf("%d", &n);
//	int fact = 1;
//	int i = 1;
//	for (; i <= n; i++) {
//		fact *= i;
//	}
//	printf("n!=%d", fact);
//	return 0;
//}
////多路分支
//#include<stdio.h>
//int main()
//{
//	int type=0;
//	scanf("%d", &type);
//	switch (type) {
//	case 1:
//		printf("早上好\n");
//		break;
//	case 2:
//		printf("中午好\n");
//		break;
//	case 3:
//		printf("晚上好\n");
//		break;
//	}
//	return 0;
//}
////猜数游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand(time(0));
//	int number = rand() % 100 + 1;
//	int count = 0;
//	int a = 0;
//	printf("我已经想好了一个1到100之间的数。");
//		do {
//			printf("请猜猜这个1到100之间的数：\n");
//			scanf("%d", &a);
//			count ++;
//			if (a > number) {
//				printf("你猜的数大了");
//			}
//			else if (a < number) {
//				printf("你猜的数小了");
//			}
//		} while (a != number);
//		printf("太好了，你用了%d次就猜到了答案。\n", count);
//	return 0;
//}
////整数求逆（三位数）
//int main()
//{
//	int a, b, c;
//	int x = 0;
//	int y = 0;
//	printf("请输入一个三位数的整数：");
//	scanf("%d", &x);
//	a = x / 100;
//	b = x / 10 % 10;
//	c = x % 10;
//	y = c * 100 + b * 10 + a;
//	printf("该数的逆序数为：%d", y);
//	return 0;
//}
////素数鉴别器
//#include<stdio.h>
//int main()
//{
//	int x = 0,i=0;
//	printf("请输入数值：\n");
//	scanf("%d", &x)
//	int n = x-1;
//	do {
//		i = x % n;
//		n--;
//	} while (i != 0);
//	if (n != 0) {
//		printf("%d不是素数",x);
//	}
//	else {
//		printf("%d是素数",x);
//	}
//	return 0;
//}
////计算器
//#include<stdio.h>
//int main()
//{
//	printf("%d", );
//	return 0;
//}
////{1+1/2+1/3=···1/n}前n项求和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0.0;
//	//int sign = 1;
//	double sign = 1.0;
//
//	printf("请输入项数n：");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		sum = sign/ i + sum;
//		sign = -sign;
//	}
//	printf("%f", sum);
//	return 0;
//}
////最大公约数（辗转相除法）
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, x = 0;
//
//	printf("请输入两个数值：");
//	scanf("%d %d", &a, &b);
//	do {
//		x = a % b;
//		a = b;
//		b = x;
//	} while (b != 0);
//	printf("这两个数的最大公约数是%d", a);
//	return 0;
//}
////数组（计算平均数）
//#include<stdio.h>
//int main()
//{
//	int i;
//	int n;
//
//
//	printf("你输入数字的个数为：");
//	scanf("%d", n);
//
//	int number[10];
//
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", i);
//		number[i]++;
//	}
//
//	printf("%d:%d", i, number[i]);
//
//	return 0;
//}
////
//#include<stdio.h>
//void cheer(int a);
//int main()
//{
//	cheer(2.4);
//	return 0;
//}
//void cheer(int a) {
//	printf("cheer %d\n",a);
//}
////二维数组
//#include<stdio.h>
//int main()
//{
//	int a[2][5] = {
//		{2,4,2,6,3},
//		{6,5,4,7,3}
//	};
//	int i, j;
//
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d\n", a[i][j]);
//		}
//	}
//	return 0;
//}
////指针
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	printf("sizeof(char)=%d", sizeof(char));
//	return 0;
//}
////test2-1
//#include<stdio.h>
//int main()
//{
//	int i1 = 'A';
//	int i2 = 'B';
//	char i3 = 'A';
//	char i4 = 'B';
//	printf("%d,%d\n", i1, i2);
//	printf("%c,%c\n", i1, i2);
//	printf("%d,%d\n", i3, i4);
//	printf("%c,%c\n", i3, i4);
//	return 0;
//}
////实数的算术平方根（进阶）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x = 0;
//	double s = 0;
//	printf("请输入要计算算术平方根的实数：\n");
//	scanf("%lf", &x);
//	if (x >= 0) {
//		s = sqrt(x);
//		printf("%f的算术平方根是%f\n", x, s);
//	}
//	else {
//		printf("该数为负数，无算术平方根，错误!\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x = 0;
//	double s = 0;
//	printf("请输入要计算算术平方根的实数：\n");
//	scanf("%lf", &x);
//	if (x >= 0) {
//		s = sqrt(x);
//		printf("%f的算术平方根是%f\n", x, s);
//	}
//	else {
//		printf("该数为负数，无算术平方根，错误!\n");
//	}
//	return 0;
//	}
////整数逆序（三位数）
//int main()
//{
//	int a, b, c;
//	int x, y;
//	printf("请输入要逆序的三位数整数：");
//	scanf("%d", &x);
//	a = x / 100;
//	b =( x / 10) % 10;
//	c = x % 10;
//	y = c * 100 + b * 10 + c;
//	printf("%d的逆序数为%d", x, y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 5, j = 5, k, p, q;
//	k = i++ + j;
//	printf("i=%d,j=%d,k=%d\n", i, j, k);
//	p = (i++) + (i++) + (i++);
//	q = (++j) + (++j) + (++j);
//	printf("i=%d,j=%d,p=%d,q=%d\n", i, j, p, q);
//	printf("k1=%d,k2=%d\n", k++, k++);
//	printf("k3=%d,k4=%d\n", ++k, ++k);
//	printf("k=%d\n", k);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float x = 5.0;
//		printf("%f", x += x -= x *= x);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float x=3.14;
//	printf("%f", x); 
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = 'A', b = 'B';
//	float a = 10, b = 10;
//	printf("%3s\n", "abcdef");
//	return 0;
//}
//int main()
//{
//	unsigned a = 32768;
//	printf("a=%d\n", a);
//	return 0;
//}
//int mian()
//{
//	int k = -1;
//	if (k <= 0) {
//		printf("####");
//	}
//	else printf("$$$$");
//	return 0;
//}
//int main()
//{
//	int k = 17;
//	printf("%#d,%#o,%#x \n", k, k, k);
//}
//int main()
//{
//	int a = 1, b = 2,c = 3;
//	printf("%d\n%d\n", a, b ,c);
//	return 0;
//}

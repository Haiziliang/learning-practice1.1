#define _CRT_SECURE_NO_WARNINGS
//简单二分查找
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };		//定义要搜索的数组
	int left = 0;								//左边界下标
	int sz = sizeof(arr) / sizeof(arr[0]);		//右边界下标
	int right = sz-1;
	int x = 0;
	printf("请输入要查找的数：\n");
	scanf("%d", &x);
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (x > arr[mid]) {
			left = mid+1;
		}
		else if (x < arr[mid]) {
			right = mid-1;
		}
		else {
		printf("找到了这个数，它在第%d位", mid+1);
			break;
		}
	}
	if (left > right)
	{
		printf("这组数据中没有您要找的那个数字\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//�򵥶��ֲ���
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };		//����Ҫ����������
	int left = 0;								//��߽��±�
	int sz = sizeof(arr) / sizeof(arr[0]);		//�ұ߽��±�
	int right = sz-1;
	int x = 0;
	printf("������Ҫ���ҵ�����\n");
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
		printf("�ҵ�������������ڵ�%dλ", mid+1);
			break;
		}
	}
	if (left > right)
	{
		printf("����������û����Ҫ�ҵ��Ǹ�����\n");
	}
	return 0;
}
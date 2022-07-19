#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
//创建数组
{
	int arr[10] = { 0 };
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++);
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	//求和
	int sum = 0;
	for (i = 0; i < 10; i++);
	{
		sum = sum + arr[i];
	}
	//求平均值
	int avg = sum / 10;
	printf("%d\n", avg);

	return 0;
}
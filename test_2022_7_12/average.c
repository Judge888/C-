#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
//��������
{
	int arr[10] = { 0 };
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++);
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	//���
	int sum = 0;
	for (i = 0; i < 10; i++);
	{
		sum = sum + arr[i];
	}
	//��ƽ��ֵ
	int avg = sum / 10;
	printf("%d\n", avg);

	return 0;
}
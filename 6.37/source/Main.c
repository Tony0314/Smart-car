#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, n;
	int arr[100] = {0};

	printf("請輸入你想比較幾個數字:");
	scanf_s("%d",&n);
	printf("\n");

	for (i = 0; i < n; ++i)
	{
		printf("輸入數字: ");
		scanf_s("%d",&arr[i]);
	}

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	printf( "最大的數值是:%d", arr[0]);

	system("pause");
	return 0;
}
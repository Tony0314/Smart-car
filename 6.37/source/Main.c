#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, n;
	int arr[100] = {0};

	printf("�п�J�A�Q����X�ӼƦr:");
	scanf_s("%d",&n);
	printf("\n");

	for (i = 0; i < n; ++i)
	{
		printf("��J�Ʀr: ");
		scanf_s("%d",&arr[i]);
	}

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	printf( "�̤j���ƭȬO:%d", arr[0]);

	system("pause");
	return 0;
}
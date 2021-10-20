#include<stdio.h>
#include<stdlib.h>
	int num[2];
	void main(void)
{
		printf("Please write two numbers:");
		scanf_s("%d %d", &num[0], &num[1]);
		if ((num[0]%num[1]) == 0)
		{
			printf("%d is multiple of %d\n",num[0],num[1]);
		}
		else
		{
			printf("%d is'nt multiple of %d\n",num[0],num[1]);
		}

		system("pause");
}
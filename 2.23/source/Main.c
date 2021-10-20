#include<stdio.h>
#include<stdlib.h>
int a,b,c;
void main(void)
{
	printf("Please write three numbers:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (b > c)
		{
			printf("largest number: %d\nsmallest number :%d\n", a,c);
		}
		else //c < b
		{
			if (a > c)
			{
				printf("largest number: %d\nsmallest number :%d\n", a,b);
			}
			else
			{
				printf("largest number: %d\nsmallest number :%d\n", c,b);
			}
		}
	}
	else //b>a
	{
		if (a > c)
		{
			printf("largest number: %d\nsmallest number :%d\n", b, c);
		}
		else //c > a
		{
			if (b > c)
			{
				printf("largest number: %d\nsmallest number :%d\n", b, a);
			}
			else //c>b
			{
				printf("largest number: %d\nsmallest number :%d\n", c, a);
			}
		}
	}
	system("pause");
}
#include<stdio.h>
#include<stdlib.h>
int a;
void main (void)
{
	printf("叫块ヴ计");
	scanf_s("%d", &a );

	if((a%2)==0){

		printf("计 %d 案计",a);
	}
	else{
		printf("计 %d 计",a);
	}

	system("pause");
}
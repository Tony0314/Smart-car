#include<stdio.h>
#include<stdlib.h>
char *reverse(char *str)
{
	
	if (!str)                     
	{
		return NULL;                
	}
	int len = strlen(str);
	if (len > 1)
	{
		
		char ctemp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';     
		reverse(str + 1);         
		str[len - 1] = ctemp;
	}
	return str;
}
int main()
{
	printf("請輸入一串數字:");
	char str[100];
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}
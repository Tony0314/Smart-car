#include <stdio.h>
#include <stdlib.h>
float a, b;
int main() {
	printf("請輸入你的身高(公分)與體重(公斤)\n\n身高：");
	scanf_s("%f", &a);
	printf("體重：");
	scanf_s("%f", &b);
	a = a / 100;
	a = b / a / a;
	if (a < 18.5)
	{
		printf("Underweight\n");
	}
	if (a >= 18.5&&a <= 24.9) {
		printf("Normal\n");
	}
	if (a >= 25 && a < 29.9)
	{
		printf("Overweight\n");
	}
	if (a > 30)
	{
		printf("Obese\n");
	}
	printf("\n\n>>>BMI = ");
	printf("%g\n", a);
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
float totalmiles, gasoline, gallon, parking, tollsper, totalpay;
void main(void)
{
	printf("Total miles driving per day :");
	scanf_s("%f", &totalmiles);
	printf("Cost per gallon of gasoline :");
	scanf_s("%f", &gasoline);
	printf("Average miles per gallon :");
	scanf_s("%f", &gallon);
	printf("Parking fees per day :");
	scanf_s("%f", &parking);
	printf("Tolls per day :");
	scanf_s("%f", &tollsper);
	
	totalpay =( (totalmiles / gasoline * gallon) + (parking + tollsper));
	printf("Total you need to pay per day : %.0f Dollars", totalpay);

	system("pause");
}
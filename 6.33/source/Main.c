#include<stdio.h>
#include<stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int s, a;
	int data[] = { 3,7,14,20,23,32,41,44,56,57,73,89,93 };

	printf("�п�J���j�M�����:");
	scanf_s("%d", &s);

	a = binarysearch(data, s, sizeof(data) / sizeof(int));

	if (a < 0)
	{
		printf("�䤣��%d\n", s);
	}
	else
	{
		printf("�b��%d����Ƨ��%d\n", a + 1, s);
	}
	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			high = mid - 1;
		}
		else if (data[mid] < search)
		{
			low = mid + 1;
		}
	}
	return-1;
}
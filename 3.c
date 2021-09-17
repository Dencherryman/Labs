#include <stdio.h>

int f(int a[], int size)
{
	int max = a[0];
	int min = a[0];
	int min_i = 0;
	int max_i = 0;
	for (int j = 0; j < size; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
			max_i = j;
		}
		if (a[j] < min)
		{
			min = a[j];
			min_i = j;
		}
	}
	printf("%d", max_i - min_i);
}

int main()
{
	int m[4];
	for (int i = 0; i < 4; i++)
		scanf_s("%d",&m[i]);
	f(m,4);
	return 0;
}
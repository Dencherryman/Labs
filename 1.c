#include <stdio.h>
int power(int x, int n)
{
	if (n == 1)
		return x;
	else
		x*=power(x, n - 1);
}
void main()
{
	int x;
	scanf_s("%d", &x);
	int y = 0;
	for (int i = 10, j = 2; j <= 11; i--, j++)
		y += (power(x, i) + j);
	printf("%d",y);
}
#include <stdio.h>
int main()
{
	char str[100];
	gets(str);
	int size = -1;
	while (str[size] != 0)
		size++;
	char word[100];
	int i = 0;
	for (; size >= 0; size--)
	{
		word[i] = str[size];
		//printf("%c", word[i]);
		if (size == 0)
		{
			for (; i >= 0; i--)
				printf("%c", word[i]);
			break;
		}
		if (str[size] == ' ' || size==0)
		{
			i--;
			for (; i >= 0; i--)
				printf("%c", word[i]);
			printf(" ");
			i = 0;
		}
		else
			i++;
	}

	return 0;
}
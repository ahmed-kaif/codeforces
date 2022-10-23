#include <stdio.h>

void insertion_sort(char str[])
{
	int i = 0 , j;
	char item;

	while (str[i]) {
		item = str[i];
		j = i - 2;
		while (j >= 0 && str[j] > item)  {
			str[j+2] = str[j];
			j = j - 2;
		}
		str[j + 2] = item;
		i = i+2;
	}
}

int main()
{
	char s[101];
	scanf("%s", s);
	void insertion_sort(char str[]);	
	insertion_sort(s);
	printf("%s", s);
}

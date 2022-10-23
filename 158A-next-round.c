#include <stdio.h>

int main(void)
{
	int n,k;
	scanf("%i %i", &n, &k);
	int count = 0;
	int part[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%i", &part[i]);	
	}
	for (int i = 0; i < n; i++)
	{
		if(part[i] > 0 && part[i] >= part[k-1])
		{
			count++;
		}
	}
	printf("%i", count);
}

#include <stdio.h>

int main()
{
	int n;
	scanf("%i", &n);
	int canSolve[n][3];
	int total = 0;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j < 3; j++)
			scanf("%i", &canSolve[i][j]);
	}
	for(int i = 0; i<n; i++)
	{	
		int sum = 0;
		for(int j = 0; j < 3; j++)
		{
			sum = sum + canSolve[i][j];
		}
		if(sum >=2)
			total++;
	}
	printf("%i", total);


}

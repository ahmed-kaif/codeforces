#include <stdio.h>

int main()
{
	int a,b;
	int count = 0;
	scanf("%i %i", &a, &b);
	
	for(int i = 1; ; i++)
	{
		a = a*3;
		b = b*2;
		if(a > b){
		count = i;
		break;
		}
		else continue;
	}

	printf("%i", count);

}

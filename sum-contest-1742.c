#include <stdio.h>

int main(void)
{
	int a,b,c,t;

	scanf("%i", &t);
	for (int i = 0; i < t; i++) {
		scanf("%i %i %i", &a, &b, &c);
		if ((a+b) == c || (b+c) == a || (c+a) == b ) {
			printf("YES\n");
		}	
		else {
			printf("NO\n");
		}
	}
}

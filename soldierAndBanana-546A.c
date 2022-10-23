#include <stdio.h>

int main()
{
	int k,n,w;
	int borrow = 0;

	scanf("%i %i %i", &k, &n, &w);
	
	k = ((w*w + w)/2)*k; // total money needed
	if (k<=n) {
		borrow = 0;
	}
	else {
		borrow = k - n; 
	}

	printf("%i", borrow);


}

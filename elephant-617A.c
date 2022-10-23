#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	float step = 0;
	scanf("%i", &x);
	
	if(x > 5)
	{
		if (x%5==0) {
			step = floorf(x/5.0);
		} else {
			step = floorf(x/5.0) + 1;
		}
	}
	else {
		step = 1;
	}

	printf("%i", (int) step);


}

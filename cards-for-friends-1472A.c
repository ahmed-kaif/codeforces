#include <stdio.h>

int main(void)
{
	long long int w,h,n,t,i;
	long long int sheet_count = 1;

	scanf("%lld", &t);

	for (i = 0; i < t ; i++) {
		scanf("%lld %lld %lld", &w, &h, &n);

		if (n == 1) {
				printf("YES\n");
				continue;
		}
		while (w%2 == 0) {
			w = w/2;
			sheet_count = sheet_count*2;
		}
		while (h%2 == 0) {
			h = h/2;
			sheet_count = sheet_count*2;
		}
		if (sheet_count >= n) {
			printf("YES\n");
		}
		else {
		printf("NO\n");
		}
		sheet_count = 1;
	}

	return 0;
	
}

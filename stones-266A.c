#include <stdio.h>

int main()
{
	int n;
	int count = 0;
	scanf("%i", &n);
	char s[n];
	scanf("%s", s);
	if (n == 1) {
		count = 0;
	}
	else {
		for (int i = 0; i < n-1; i++) {
			if (s[i] == s[i+1]) {
				count++;
			}
		}
	}
	printf("%i", count);

}

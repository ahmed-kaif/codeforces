#include <stdio.h>

int main(void)
{
	int w;
	scanf("%i", &w);
	if (w%2 == 0) {
		if (w == 2) {
			printf("NO\n");
		}
		else printf("YES");
	}
	else printf("NO");
}

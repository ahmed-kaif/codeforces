#include <stdio.h>
int main()
{
	char s[100];
	int count = 0;
	scanf("%s", s);
	
	for (int i=0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			count++;
		}
		else {
		count--;
		}
	}

	if (count > 0) { //uppercase
		for (int i = 0; s[i] != '\0'; i++) {
	
		}
	} else {
		for (int i=0; i < strlen(s); i++) {
		
		}
	}

	printf("%s",s);
}

#include <stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int count = 0;
	scanf("%s", s);
	
	for (int i=0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			count++;
		}
		else {
		count--;
		}
	}

	if (count > 0) { //uppercase
		for (int i = 0; s[i] != '\0'; i++) {
	      toupper(s[i]);
		}
	} else {
		for (int i=0; i < s[i] != '\0'; i++) {
		tolower(s[i]);
		}
	}

	printf("%s",s);
}

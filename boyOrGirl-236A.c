#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[])
{
	int i,j,k;
	for (i = 0; i < strlen(str); i++) {
		for (j = i + 1; str[j] != '\0'; j++) {
			if (str[j] == str[i]) {
				for(k = j; str[k] != '\0'; k++)
					str[k] = str[k+1];
			}
		}
	}
}

int main()
{
	char uname[101];
	scanf("%s", uname);
	removeDuplicates(uname);
	printf("%s", uname);
}

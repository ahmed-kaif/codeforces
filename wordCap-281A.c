#include <stdio.h>
int main()
{
	char word[1000];
	scanf("%s", word);
	
	if(word[0] >= 'a')
		word[0] = word[0] - 'a' + 'A';

	printf("%s", word);
}

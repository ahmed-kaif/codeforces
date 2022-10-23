/* Input */
/* The first line contains an integer n (1 ≤ n ≤ 100).
 * Each of the following n lines contains one word. 
 * All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters. */

/* Output */
/* Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data. */

#include <stdio.h>
int stringlen(char str[])
{
	int count = 0;
	while (str[count])
		++count;
	return count;
}

int main()
{
	int n;
	scanf("%i",&n);
	char str[n][101];
	for(int i=0; i<n; i++){
		scanf("%s", str[i]);
	}
	for(int i=0; i<n; i++){
		if (stringlen(str[i]) < 11) {
			printf("%s\n",str[i]);
		}
		else {
			printf("%c%i%c\n", str[i][0], stringlen(str[i])-2, str[i][stringlen(str[i])-1] );
		}
	}
}

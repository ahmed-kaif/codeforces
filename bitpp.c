#include <stdio.h>
int main()
{
	int n;
	scanf("%i", &n);
	char operation[n][3];
	int x = 0;
	for(int i=0; i<n; i++){
		scanf("%s", operation[i]);
	}
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (operation[i][j] == '+') {
				x++;
				break;
			}
			else if(operation[i][j] == '-') {
				x--;
				break;
			}
		}
	}

	printf("%i", x);


}

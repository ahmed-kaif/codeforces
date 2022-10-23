#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matrix[5][5];
	int move;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%i", &matrix[i][j]);
		}
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (matrix[i][j] == 1) {
				move = abs(2-i)+abs(2-j);	
				break;
			}
		}
	}
	printf("%i", move);

}

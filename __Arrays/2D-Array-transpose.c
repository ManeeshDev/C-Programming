#include<stdio.h>

int main() {

	int matrix[2][3];
	
	printf("Enter elements of matrix: \n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("\nMatrix is:\n\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose of matrix:\n\n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++) {
			printf("%d\t", matrix[j][i]);
		}
		printf("\n");
	}
		
	return 0;
	
	
	
	
	
	
	
	
	
}
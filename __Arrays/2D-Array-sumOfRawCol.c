#include<stdio.h>

int main() {

	int matrix[3][3];
	int sumOfRaw, sumOfCol;
	
	printf("Enter elements of matrix: \n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("\nMatrix is:\n\n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nSum of individual Rows and Columns of a Matrix:\n\n");
	
	for(int i = 0; i < 3; i++) {
		sumOfRaw = 0;
		sumOfCol = 0;
		
		for(int j = 0; j < 3; j++) {
			sumOfRaw += matrix[i][j];
			sumOfCol += matrix[j][i];
		}
		printf("\nSum of raw %d: %d, Sum of col %d: %d", i, sumOfRaw, i, sumOfCol);
	}
		
	return 0;	
}
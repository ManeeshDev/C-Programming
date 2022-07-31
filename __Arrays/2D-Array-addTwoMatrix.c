#include<stdio.h>

int main() {

	int matrix_1[2][3], matrix_2[2][3], matrix_3[2][3];
	
	printf("Enter elements of first matrix: \n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix_1[i][j]);
		}
	}

	printf("\nEnter elements of second matrix: \n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix_2[i][j]);
		}
	}
	
	printf("\nSum of 1 & 2 Matrix is:\n\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
			printf("%d\t", matrix_3[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
#include<stdio.h>

int main() {

	int matrix_1[3][3], matrix_2[3][3], matrix_3[3][3];
	int sum;
	
	//get num of raws and col by user and validate for equal to 1st matrix cols with 2nd matrix raws
	
	printf("Enter elements of first matrix: \n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix_1[i][j]);
		}
	}

	printf("\nEnter elements of second matrix: \n");
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix_2[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			sum = 0;
			for(int k = 0; k < 3; k++) {
				sum += (matrix_1[i][k] * matrix_2[k][j]);
			}
			matrix_3[i][j] = sum;
		}
	}
	
	printf("\nMultiplication of 1 & 2 Matrix is:\n\n");
		
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d\t", matrix_3[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
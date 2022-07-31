#include<stdio.h>

int main() {
	
//	int a[2][3] = {1,1,1,2,2,2};
//	int b[2][3] = {{1,1,1},{2,2,2}};
//	int c[][3] = {{1,1,1},{2,2,2}};
//	int d[2][3];
	
	int matrix[2][3];
	int sum = 0;
	
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
			sum += matrix[i][j];
		}
		printf("\n");
	}
	
	printf("\nSum is matrix: %d", sum);
	
	return 0;	
}
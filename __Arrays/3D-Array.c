#include<stdio.h>

int main() {
	
	
//	int matrix[2][2][3] = { { {1,2,3},{1,2,3} }, { {1,2,3},{1,2,3} } };
	int matrix[2][3][3];
	
	printf("Enter elements of 3D array: \n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				scanf("%d", &matrix[i][j][k]);
			}
		}
	}
	
	printf("\n3D array is:\n\n");
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
				printf("%d\t", matrix[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	
	return 0;	
}
#include<stdio.h>

int main() {
	
	int num[5];
	
	printf("Enter Array elements: \n");
	
	for(int i =0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	
	printf("Print Array elements: \n");
	
	for(int i =0; i < 5; i++) {
		printf("Array element at index[%d] is: %d\n", i, num[i]);
	}
	
	printf("Print Array elements reverse: \n");
		
	for(int i = 4; i >= 0; i--) {
		printf("Array element at index[%d] is: %d\n", i, num[i]);
	}
	
	return 0;	
}
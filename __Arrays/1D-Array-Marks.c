#include<stdio.h>

#define Len 10

int main() {
	
	int num[Len], even = 0, odd = 0;
	
	printf("Enter 10 numbers: \n");
	
	for(int i = 0; i < Len; i++) {
		scanf("%d", &num[i]);
		
		if(num[i] % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}
	
	printf("\nTotal even numbers are: %d\n", even);
	printf("\nTotal odd numbers are: %d\n", odd);
	
	return 0;	
}
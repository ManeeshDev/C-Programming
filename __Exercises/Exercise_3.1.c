#include <stdio.h>
/* Exercise 3: Practice scanf statement in a C program */

int main() {
/* i. Write a C program to input two marks from the 
	  keyboard and display the marks. */
	int mark1 , mark2;
	
	printf("Enter Mark 1: ");
	scanf("%d", &mark1);
	printf("Enter Mark 2: ");
	scanf("%d", &mark2);
	
	printf("\n");
	printf("Mark 1: %d\n", mark1);
	printf("Mark 2: %d\n", mark2);
	
    return 0;
}

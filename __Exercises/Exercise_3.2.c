#include <stdio.h>
/* Exercise 3: Practice scanf statement in a C program */

int main() {
/* ii. Modify the above program to calculate the total of 
	   the marks and display the total. */
	int mark1 , mark2 , totalOfMarks;
	
	printf("Enter Mark 1: ");
	scanf("%d", &mark1);
	printf("Enter Mark 2: ");
	scanf("%d", &mark2);
	
	totalOfMarks = mark1 + mark2;
	
	printf("\n");
	printf("Total of Marks: %d\n", totalOfMarks);

    return 0;
}

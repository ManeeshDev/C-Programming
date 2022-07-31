#include <stdio.h>
/* Exercise 3: Practice scanf statement in a C program */

int main() {
//iii. Next, add a statement to calculate the average mark.
//iv. Display the average mark.
	int mark1 , mark2 , totalOfMarks;
	float avgOfMarks;
	
	printf("Enter Mark 1: ");
	scanf("%d", &mark1);
	printf("Enter Mark 2: ");
	scanf("%d", &mark2);
	
	totalOfMarks = mark1 + mark2;
	avgOfMarks = (float)totalOfMarks / 2;
	
	printf("\n");
	printf("Average of Marks: %.2f\n", avgOfMarks);

    return 0;
}

#include <stdio.h>
/* Exercise 2: Practice number formatting */

int main() {
// a) What is the output of the following statements?

	// i. printf( “%.2f\n”, 3.446);
	printf( "%.2f\n", 3.446);
	
	// ii. printf(“%.1f\n”, 3.446);
	printf("%.1f\n", 3.446);
	
// b) Write statements to,

	//i. Print the value 123.4567 with 2 digits precision.
	printf("%.2f\n", 123.4567);
	
	/*ii. Print the value 3.14159 with three digits to the 
		  right of the decimal point.*/
	printf("%.3f\n", 3.14159);
	
	/*iii. Print the value 333.546372 in a field width of 
		   15 characters with precisions of 1,2,3,4 and 5.*/
	printf("%15.1f\n", 333.546372);
	printf("%15.2f\n", 333.546372);
	printf("%15.3f\n", 333.546372);
	printf("%15.4f\n", 333.546372);
	printf("%15.5f\n", 333.546372);

    return 0;
}

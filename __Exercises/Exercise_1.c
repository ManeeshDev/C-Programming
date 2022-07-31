#include <stdio.h>
/* 	 
	Exercise 1: Practice how to use variables in printf statement 
	What does the following print? Assume x = 2 and y = 3.
*/
int main() {
    int x = 2 , y = 3;

    // i. printf( “*\n**\n***\n****\n*****\n” );
    printf( "*\n**\n***\n****\n*****\n" );
	printf("\n");

    // ii. printf( “%d”, x + x );
    printf( "%d", x + x );
	printf("\n");

    // iii. printf( “x = “);
    printf( "x = ");
	printf("\n");

    // iv. printf( “x=%d”, x);
    printf( "x=%d", x);
	printf("\n");

    // v. printf( “%d = %d”, x+y, y+x);
    printf( "%d = %d", x+y, y+x);
    printf("\n");

    // vi. /* printf( “%d”, x+y ); */
    /* printf( "%d", x+y ); */

    // vii. printf(“\n”);
    printf("\n");

    // viii. float z = 45.567;
    //       printf(“value is %.2f”, z);
    float z = 45.567;
    printf("value is %.2f", z);
	printf("\n");

    return 0;
}

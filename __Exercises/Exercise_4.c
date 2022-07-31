#include <stdio.h>
/* Exercise 4: Practice using structures in C programs */

int main() {
/* a) Create a structure called item to store the following details of items in a shop. 
		itemNo 			integer
		price 			double
		quantity 		integer
*/
	struct Item {
		int itemNo;
		double price;
		int quantity;
	};

/*b) Create 2 variables from the item data type and store the following data 
	 entered through the keyboard. Print the details on the screen in the 
	 following format. */
	 
	struct Item item1;
	struct Item item2;
	
	printf("::Enter Item 1 Data\n");
	printf("  ItemNo: ");
	scanf("%d:", &item1.itemNo);
	printf("  Price: ");
	scanf("%lf:", &item1.price);
	printf("  Quantity: ");
	scanf("%d:", &item1.quantity);
	
	printf("\n");
	
	printf("::Enter Item 2 Data\n");
	printf("  ItemNo: ");
	scanf("%d:", &item2.itemNo);
	printf("  Price: ");
	scanf("%lf:", &item2.price);
	printf("  Quantity: ");
	scanf("%d:", &item2.quantity);

    printf("\n+---------------+---------------+---------------+");
    printf("\n| Item No       | Price         | Quantity      |");
    printf("\n+---------------+---------------+---------------+");
    printf("\n|%15d|%15.2lf|%15d|", item1.itemNo, item1.price, item1.quantity);
    printf("\n+---------------+---------------+---------------+");
    printf("\n|%15d|%15.2lf|%15d|", item2.itemNo, item2.price, item2.quantity);
    printf("\n+---------------+---------------+---------------+");
    
    return 0;
}



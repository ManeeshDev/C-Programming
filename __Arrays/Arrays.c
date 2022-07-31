#include<stdio.h>
#include <string.h>

#define LEN 50

int main() {
	
//	int twoDArray[2][3] = {1,2,3,4,5,6};
//	int twoDArray[3][3] = { {1,2,3}, {4,5,6}, {1,2} };
	 
	int len = 5;

	int a[5];
	int b[2+2];
	int c[2*5];
	int d[12/6];
	int g[len];
	int h[LEN];
	int j[] = {0,1,2};
	int k[5] = {-1,0,1,2};
	int m[3] = {};

	char name[10];
//	char name2[];
	char name3[7] = "maneesh";
//	char name4[7] = 'maneesh';
	char name5[7] = {'m','a','n','e','e','s','h'};
	char name6[4] = {"abcd"};
//	char name6[7] = {"m","a","n","e","e","s","h"};
	
//	printf("Enter string: \n");
//	scanf( "%[^\n]%*c", string1);
//	scanf("%s", string1);
//  char string1[8] = "Maneesh"; 

//	gets(string1);

//	strcpy(string1, string2);
	
	printf("string1 => %d", strlen(string1));
	
	
//	char string1 [255] = "manish"; 
//	char string2 [50] = {'m','a','\0','e','e','\0','h'}; 

//	for (int i = 0; i < 50 && string2[i] != '\0'; i++) { 
//		printf("%c", string2[i]);
//	}


//	for (int i = 0; i < 50; i++) { 
//		if(string2[i] != '\0') {
//			printf("%c", string2[i]);
//		}
//	}

	return 0;	
}
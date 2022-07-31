
#include <stdio.h>

typedef struct student {
	int regNo;
	char name[20];
	struct subject {
		int subjCode;
		char subjName[20];
		int mark;
	} subj[3];
	int total;
	float percentage;
} student;

void create() {
	student *stu;
	int noOfStudent, i, j;
	
	printf("\nHow many students you want: ");
	scanf("%d", &noOfStudent);
	
	for(i = 0; i < noOfStudent; i++) {
		printf("\nEnter Roll No: ");
		scanf("%d", &choice);
	}
	
};
void display();
void append();

int main() {
	int choice;
	
	do {
		printf("\n(1) CREATE");
		printf("\n(2) DISPLAY");
		printf("\n(3) APPEND");
		printf("\n(0) EXIT");
		
		printf("\nEnter Your Choice: ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				append();
				break;
		}
		
	} while(choice != 0);
	
	
	
	return 0;                      
}


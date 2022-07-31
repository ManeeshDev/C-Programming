#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>

#define ESC 27
#define F1 59
#define F2 60

void signup(void);
void login(void);

struct {
	char password[20];
	char username[20];
} s;

FILE *fp;

void gotoxy(int x, int y) {
  static HANDLE h = NULL;
  if(!h) {
  	h = GetStdHandle(STD_OUTPUT_HANDLE);
  }
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}

void login() {
	int c;
	char username[20];
	char pass[20];
	char chkp;
	char chku;

	system("cls"); //clrscr(); // < new c versions not work
	gotoxy(23,5);
	printf("_____Login Zone___");
	gotoxy(23,7);

	fp=fopen("record.bin","rb");

	printf("Enter UserName         :");
	gets(username);
	gotoxy(23,9);

	printf("Enter PassWord         :");


	for(int i = 0; c = getch() != 13; i++) {
		pass[i] = c;
		printf("*");
	}

//  pass[i]='\0';

	while(!feof(fp)) {
		fread(&s,sizeof(s),1,fp);

		chku = strcmp(username, s.username);

		chkp = strcmp(pass, s.password);

		gotoxy(23,11);
		if(chku == 0 && chkp != 0) {
			printf("Invalid password.!");
			break;
		}
		else if(chku != 0 && chkp == 0) {
			printf("Invalid Username.!");
			break;
		}
		else if(chku == 0 && chkp == 0) {
			system("cls"); //clrscr(); // < new c versions not work
			gotoxy(20,10);
			printf("_Hello %s Welcome Here_ ", s.username);
			break;
		}
	}
    getch();
}

void signup() {
	char c;
	fp=fopen("record.bin","ab");
	system("cls"); //clrscr(); // < new c versions not work
	gotoxy(23,5);

	printf("_____SignUp Zone____");
	gotoxy(23,7);

	printf("Set UserName           :  ");

	gets(s.username);
	gotoxy(23,9);
	printf("Set Password           :  ");
	for(int i = 0; c = getche() != 13; i++){
		s.password[i]=c;
	}
	gotoxy(23,11);
	printf("Press Enter to continue.........");

	if(getch() == 13) {
		fwrite(&s,sizeof(s),1,fp);
		gotoxy(23,13);
		printf("Inforsmations Saved....");
	}
	else {
		return;
	}
	fclose(fp);
	getch();
}

void main() {
	int ch;

	while(1) {
		system("cls"); //clrscr(); // < new c versions not work
		gotoxy(20,5);

		printf("____C Programming_____");
		gotoxy(28,7);

		printf("Yours Welcome Here...........");
		gotoxy(28,9);

		printf("Press F1 For Login");
		gotoxy(28,11);

		printf("Press F2 For Signup");
		gotoxy(28,13);

		printf("Press ESC For Exit");
		gotoxy(20,15);

		printf("___********_____\n");
		getch();
		ch = getch();

		switch(ch) {
			case F1:
				system("cls"); //clrscr(); // < new c versions not work
				gotoxy(10,14);

				for(int i=0;i<40;i++) {
					printf("_");
					Sleep(40); //delay(40);
				}
				login();
				break;
			case F2:
				system("cls"); //clrscr(); // < new c versions not work
				gotoxy(10,14);

				for(int i=0;i<40;i++) {
					printf("_");
					Sleep(40); //delay(40);
				}
				signup();
				break;
			case ESC:
				exit(0);
				break;
		}
	}
	getch();
}




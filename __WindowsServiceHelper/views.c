#include "config.h"

/* Always include the header file that declares something in the C file that defines it. This makes sure that the declaration and definition are always in-sync.
Put this header first in foo.c to ensure the header is self-contained.*/
#include "views.h"

#define ESC 27
#define F1 59
#define F2 60
#define ENTER 13
#define BACKSPACE 8

/**
 * This is the function definition.
 * It is the actual body of the function which was declared elsewhere.
 */
void welcomeWindow(void);
void signup(void);
void login(void);


struct User {
    char username[20];
    char password[20];
}user;


FILE *fp;

void headerText() {
    textcolor(MAGENTA);
    gotoxy(25,3);
    printf("==========================================================================");

    textcolor(BLUE);
    gotoxy(51,4);
    printf("Windows Service Helper");

    textcolor(MAGENTA);
    gotoxy(25,5);
    printf("==========================================================================");
}

void footerText() {
    textcolor(MAGENTA);
    gotoxy(25,18);
    printf("==========================================================================\n");
}

void welcomeWindow() {
    int ch;

    while(1) {
        clrscr();

        system("color E3");
        textbackground(YELLOW);

        headerText();

        textcolor(BLUE);
        gotoxy(45,7);
        printf("______Great to see You Here______");

        textcolor(BLUE);
        gotoxy(50,10);
        printf("(1) Press [F1] for Login");
        gotoxy(50,12);
        printf("(2) Press [F2] for Signup");
        gotoxy(50,14);
        printf("(3) Press [ESC] for Exit");

        footerText();

        getch();
        ch=getch();

        switch(ch) {
          case F1:
            clrscr();
            gotoxy(25,20);
            for(int i=0;i<40;i++) {
                printf("||");
                delay(40);
            }
            login();
            break;

          case F2:
            clrscr();
            gotoxy(25,20);
            for(int i=0;i<40;i++) {
                printf("||");
                delay(40);
            }
            signup();
            break;

          case ESC:
            clrscr();
            gotoxy(25,20);
            for(int i=0;i<40;i++) {
                printf("**");
                delay(40);
            }
            clrscr();
            exit(0);
            break;
        }
    }
    getch();
}


void signup() {
    char character;

    fp=fopen("record.txt","ab");

    clrscr();
    headerText();

    textcolor(BLUE);
    gotoxy(52,7);
    printf("______SignUp______");

    gotoxy(45,9);
    printf("Enter UserName:  ");
    gets(user.username);

    gotoxy(45,11);
    printf("Enter Password: ");
    //for(int i=0; character = getche() != ENTER; i++) {
    //    user.password[i] = character;
    //}
    gets(user.password);

    gotoxy(42,13);
    printf("____________________________________________");

    gotoxy(42,15);
    printf("Do you want to Submit Detail..?");

    textbackground(WHITE);
    textcolor(RED);
    gotoxy(42,17);
    printf(" Submit [Enter] \t Cancel [Backspace] ");
    textbackground(YELLOW);
    textcolor(BLUE);

    footerText();

    if(getch() == ENTER) {
        //char userSave[50] = "UserName: " + user.username + "\nPassword: " + user.password + " \n"; // use multidi.... arry
        //char userSave[50][50] = {{"UserName: ",}}
        fwrite(&user, sizeof(user), 1, fp);
        fclose(fp);
        clrscr();
        textbackground(RED);
        textcolor(WHITE);
        gotoxy(25,12);
        printf("User Created!!");

        textbackground(YELLOW);
        textcolor(MAGENTA);
        gotoxy(25,14);
        for(int i=0;i<40;i++) {
            printf("||");
            delay(80);
        }
        textcolor(BLUE);
        clrscr();
        welcomeWindow();
    }
    else if(getch() == BACKSPACE) {
        fclose(fp);
        clrscr();
        gotoxy(25,20);
        for(int i=0;i<40;i++) {
            printf("**");
            delay(30);
        }
        clrscr();
        signup();
    }
    else {
        gotoxy(25,21);
        printf("Try Again, Press any Key to Exit...");
        if(getch()) {
            clrscr();
            welcomeWindow();
        }
        exit(0);
    }

    getch();

}

void login() {
	char character;
	char username[20];
	char password[20];
	char chkp;
	char chku;

    fp=fopen("record.txt","rb");

    clrscr();
    headerText();

    textcolor(BLUE);
    gotoxy(52,7);
    printf("______Login______");

    gotoxy(45,9);
    printf("Enter UserName:  ");
    gets(username);

    gotoxy(45,11);
    printf("Enter Password: ");
    //for(int i=0; character = getche() != ENTER; i++) {
    //    user.password[i] = character;
    //}
    gets(password);

    gotoxy(42,13);
    printf("____________________________________________");

    while(!feof(fp)) {
		fread(&user,sizeof(user),1,fp);

		chku = strcmp(username, user.username);

		chkp = strcmp(password, user.password);

		gotoxy(45,15);
		if(chku == 0 && chkp != 0) {
			printf("Invalid password.!");
			break;
		}
		else if(chku != 0 && chkp == 0) {
			printf("Invalid Username.!");
			break;
		}
		else if(chku == 0 && chkp == 0) {
            textbackground(YELLOW);
            textcolor(MAGENTA);
            gotoxy(25,14);
            for(int i=0;i<40;i++) {
                printf("||");
                delay(80);
            }

			clrscr();
			gotoxy(42,10);
			printf(" _ Hello %s Welcome Here _ ", user.username);
			break;
		}
	}
	if(getch()) {
        clrscr();
        welcomeWindow();
	}
    getch();
}







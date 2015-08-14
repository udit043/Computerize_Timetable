#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>


void admin();
void teachermenu();
void studentmenu();
void mainmenu()
{
  char FChoice[10];int nopass;int see;
  a:
   {
      system("cls");clrscr();
      gotoxy(20,2);
      textcolor(11);printf("Main-Menu");
      gotoxy(20,4);
      textcolor(10);printf("Press");
      textcolor(15);
      gotoxy(20,6);
      printf("1 - Login as Admin");
      gotoxy(20,7);
      printf("2 - Teacher's View");
      gotoxy(20,8);
      printf("3 - Student's View");
      gotoxy(20,9);
      printf("4 - List of Holidays");
      gotoxy(20,10);
      printf("5 - Help");
      gotoxy(20,11);
      printf("6 - Exit");
      gotoxy(20,13);
      textcolor(13);printf("Enter your choice : ");textcolor(14);
      fflush(stdin);
      scanf("%s",&FChoice);
      fflush(stdin);
      see=strlen(FChoice);
      if(see!=1) { textcolor(13);clrscr();system("cls");printf("Invalid choice\nPress any key to go back to main menu\n");getch();goto a; }
      textcolor(15);
      if(FChoice[0]=='1')
       {
              char Password[6]="admin";char Ipassword[6];int adminflag=0;
              clrscr();
              for(nopass=0;nopass<3;nopass++)
              {     
                    gotoxy(20,5);
                    textcolor(11);printf("Enter password\n");textcolor(15);
                    gotoxy(20,6);
                    textcolor(0);scanf("%s",&Ipassword);
                    if(!strcmp(Password,Ipassword))
                    {
                          clrscr();gotoxy(16,6);
                          textcolor(11);printf("Password Match , Redirecting you to Admin Dashboard");
                          textcolor(15);Sleep(1400);adminflag=1;break;
                    }
                    else
                    {  
                          clrscr();
                          gotoxy(20,3);
                          textcolor(12);printf("Password is wrong , Enter again (");textcolor(10);printf("%d",2-nopass);textcolor(12);printf(" times more)");textcolor(15);
                    }
              }
       if(adminflag==0) { int ex;for(ex=0;ex<4;ex++) {gotoxy(20,7);textcolor(ex+10);printf(" You are not authorized Person\n\t\t\t Program is exiting");Sleep(300);}exit(0);}
       if(adminflag==1) { gotoxy(20,8);admin();}
       }
       
       else if(FChoice[0]=='2')
       {
             teachermenu();
       }
       
       else if(FChoice[0]=='3')
       {
             studentmenu();
       }
       
       else if(FChoice[0]=='4')
       {
            calendermenu();
       }
       
       else if(FChoice[0]=='5')
       {
            clrscr();
            textcolor(15);
            printf("Press 1 to login as admin. Admin can generate Time Table , add Teacher , view Teacher's detail & timetable etc.\n\n");
            printf("Press 2 to view as teacher , can view time table of teacher , can see record\n\n");
            printf("Press 3 to view as student , can view time table of entered semester\n\n");
            printf("Press 4 to view Holidays , National & Public(optional) Holidays\n\n");
            printf("\nPress any key to go back to menu\n");
            getch();
            goto a;
       }
       
       else if(FChoice[0]=='6')
       {
            clrscr();int ex;int ey;
            for(ey=0;ey<2;ey++)
            {
              for(ex=0;ex<5;ex++)
              {
                 clrscr();//system("cls");
                 textcolor(11);printf("Thank you for viewing\n");textcolor(15);printf("Project by - ");textcolor(10+ex);printf("\n\nShubham Jaiswal\nUdit Raikwar\nYash Awidra\nRajat Singh Verma\n");
                 Sleep(600);
              }
            }
            exit(0);
       }
       else
       {   
           clrscr();system("cls");
           textcolor(13);printf("Wrong choice , Press any key to re-enter correct choice\n");textcolor(15);
           getch();
           goto a;
       }
       
   }    
  printf("\n");getch();
}

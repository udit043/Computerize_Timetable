#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void genTT();
void addteacher();
void displayteacher();
void stuview();
void mainmenu();
void delteacher();
void admin()
//int main()
{
   b:
   { 
     char GAVch;
     clrscr();system("cls");
     gotoxy(20,2);
     textcolor(12);
     printf("Main-Menu ");
     textcolor(14);
     printf("->");
     textcolor(11);
     printf(" Admin");
     gotoxy(20,4);
     textcolor(10);printf("Press");textcolor(15);
     gotoxy(20,6);
     printf("1 - Generate Time Table");
     gotoxy(20,7);
     printf("2 - Add Teacher");
     gotoxy(20,8);
     printf("3 - View Teacher's Detail");
     gotoxy(20,9);
     printf("4 - Delete Teacher");
     gotoxy(20,10);
     printf("5 - Back to Main Menu");
     gotoxy(20,12);
     textcolor(13);printf("Enter your choice : ");
     fflush(stdin);
     textcolor(14);scanf("%c",&GAVch);textcolor(15);
     fflush(stdin);
     if(GAVch=='1')
     {
         genTT();
     }
     else if(GAVch=='2')
     {
         addteacher();
     }
     else if(GAVch=='3')
     {
      c:
      {
           clrscr(); char GAVch1;
           printf("Press\n1 - View Teacher's Record\n2 - View Teacher's Time-Table\n");
           fflush(stdin);
           scanf("%c",&GAVch1);
           fflush(stdin);
           if(GAVch1=='1')
           {
               displayteacher();
           }
           else if(GAVch1=='2')
           {
               TviewTT();
           }
           else
           {
                printf("Wrong choice , please enter any key to re-enter correct choice\n");
                getch();fflush(stdin);
                goto c;
           }
      }
     }
     else if(GAVch=='4')
     {
          delteacher();
     }
     else if(GAVch=='5')
     {
         mainmenu();
     }
     else
     {
         clrscr();system("cls");
         printf("Wrong choice , please enter any key to return to menu\n");
         getch();fflush(stdin);
         goto b;
      }
   }
 //  system("pause");
}

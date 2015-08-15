#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <coni.h>
#include <windows.h>

void admin();
void displayteacher()
{
    int b=0;char cond[]="yes";char op1[3];
//---------------------------------------------------------------------------
    clrscr();system("cls");
    textcolor(10);
    printf("Do you want to see teacher's detail ?");textcolor(13);printf("(yes/no)\n");
    textcolor(15);
    fflush(stdin);
    gets(op1);
    if(!strcmp(op1,cond))
    {
        
        int display; int eli=0;
        
//        printf(" __________________________________________________________________________\n");
//        printf("|SNo | Teacher Name      | Initial | Qualifications    | YOE  | Mobile/Id  |\n");

        textcolor(11);printf("____________________________________________________________________________\n");
        textcolor(11);printf("|");textcolor(12);printf("SNo ");textcolor(11);printf("| ");textcolor(12);printf("Teacher Name      ");textcolor(11);printf("| ");textcolor(12);printf("Initial ");textcolor(11);printf("| ");textcolor(12);printf("Qualifications    ");textcolor(11);printf("| ");textcolor(12);printf("YOE  ");textcolor(11);printf("| ");textcolor(12);printf("Mobile/Id  ");textcolor(11);printf("|\n");
        textcolor(15);

        FILE *p;
        char acline[80];int nl,lnbr=0;
        p = fopen("teacher.txt","r");
        if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Admin menu\n");getch();admin();}
        fseek(p,0,SEEK_SET);
        while (!feof(p))
        {
          for(nl=0;nl<80;nl++)
          acline[nl]=NULL;
          fgets(acline,80,p);
          if(!(strlen(acline)>8)) { }
          else
          {

            b=b+1;//printf("%d",strlen(acline));
            //for(display=0;acline[display]!=0;display++)
            for(display=0;display<strlen(acline);display++)
            {
                if((display+1)==(strlen(acline)))
                {
                   if(!(acline[display]=='\n'))
                   {lnbr=1;} 
                }
			   if(acline[display]!='!')
               {
                   textcolor(15);printf("%c",acline[display]);
               }
               else
               {
                   if(eli==0)
                   {textcolor(11);printf("|");textcolor(15);printf("%d",b);gotoxy(6,4+b);textcolor(11);printf("|");gotoxy(8,4+b);eli=eli+1;}
                   else if(eli==1)
                   {gotoxy(26,4+b);textcolor(11);printf("|");gotoxy(28,4+b);eli=eli+1;}
                   else if(eli==2)
                   {gotoxy(36,4+b);textcolor(11);printf("|");gotoxy(38,4+b);eli=eli+1;}
                   else if(eli==3)
                   {gotoxy(56,4+b);textcolor(11);printf("|");gotoxy(58,4+b);eli=eli+1;}
                   else if(eli==4)
                   {gotoxy(63,4+b);textcolor(11);printf("|");gotoxy(65,4+b);eli=eli+1;}
                   else if(eli==5)
                   {gotoxy(76,4+b);textcolor(11);printf("|");eli=0;}
               }
            }
          }
		  //printf("\n");   
        }
        fclose(p);
        //printf("\n");
        if(lnbr==1)
        {textcolor(10);printf("\n\nNumber of teacher is ");textcolor(14);printf("%d \n",b);}
        else
        {textcolor(10);printf("\nNumber of teacher is ");textcolor(14);printf("%d \n",b);}
    }
   textcolor(15); 
   printf("\nPress any key to return to Admin menu");
   getch();
   admin();
}

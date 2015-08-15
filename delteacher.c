#include <stdio.h>
#include <stdlib.h>
#include <coni.h>
#include <windows.h>
#include <string.h>

void admin();
void mainmenu();
void delteacher()
{
    clrscr();system("cls");
    FILE *p,*q;
    int display; int eli=0;int b=0;char acline[80];
    textcolor(10);printf("\n                     List of teachers in the department\n");
    textcolor(11);printf("____________________________________________________________________________\n");
    textcolor(11);printf("|");textcolor(12);printf("SNo ");textcolor(11);printf("| ");textcolor(12);printf("Teacher Name      ");textcolor(11);printf("| ");textcolor(12);printf("Initial ");textcolor(11);printf("| ");textcolor(12);printf("Qualifications    ");textcolor(11);printf("| ");textcolor(12);printf("YOE  ");textcolor(11);printf("| ");textcolor(12);printf("Mobile/Id  ");textcolor(11);printf("|\n");textcolor(15);

    p = fopen("teacher.txt","r");
    if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Main menu\n");getch();mainmenu();}
    fseek(p,0,SEEK_SET);int nl,lnbr=0;
    while (!feof(p))
    {
        for(nl=0;nl<80;nl++)
        acline[nl]=NULL;
        fgets(acline,80,p);
        if(!(strlen(acline)>10)) { }
        else
        {
            b=b+1;
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
    }
    fclose(p);
    if(lnbr==1)
    {textcolor(10);printf("\n\nNumber of teacher is ");textcolor(14);printf("%d \n",b);}
    else
    {textcolor(10);printf("\nNumber of teacher is ");textcolor(14);printf("%d \n",b);}

    int i=1;int j=0;char cond[]="yes";char op3[3];
    textcolor(12);printf("\nChoose Teacher's number to delete : ");
    fflush(stdin);
    textcolor(13);scanf("%d",&j);
    if(!((j>0)&&(j<=b))) {  system("cls"); textcolor(10);printf("Wrong Choice\n");textcolor(15);printf("Press any key to go back to admin menu");getch();admin();}
    
    textcolor(9); printf("\nAre you sure you want to delete ?"); textcolor(14); printf("(yes/no)\n");
    textcolor(15);fflush(stdin);gets(op3);fflush(stdin);

    if(strcmp(op3,cond))
    { system("cls");textcolor(10);printf("Press any key to go back to admin menu\n"); getch(); admin();}
    fflush(stdin);
    //rewind(p);
    p = fopen("teacher.txt","r");
    q=fopen("zacv.txt","w");
    fseek(p,0,SEEK_SET);
    fseek(q,0,SEEK_SET);
    
    Sleep(100);
    
    if(b!=j) 
    {  
       for(i=1;i<=b;i++)
       {
          for(nl=0;nl<80;nl++)
          acline[nl]=NULL;
          fgets(acline,80,p);
          fflush(stdin);
          if((strlen(acline)>10))
          {  
            if(j!=i)
            {
               fputs(acline,q);   
            }
            fflush(stdin);
          }
       }  
    }
    if(b==j) 
    {  
       for(i=1;i<b;i++)
       {
          for(nl=0;nl<80;nl++)
          acline[nl]=NULL;
          fgets(acline,80,p);
          fflush(stdin);
          if((strlen(acline)>10))
          {  
            fputs(acline,q);   
            fflush(stdin);
          }
       }
    }
    /*for(i=1;i<=b;i++)
    {
         fgets(acline,80,p);fflush(stdin);
         if(j!=i)
         {
              fputs(acline,q);   
         }
         fflush(stdin);
    }*/
    /*while(!feof(p))
    {
         fgets(acline,80,p);
         if(!(strlen(acline)>2)) { }
         else
         {
            if(j!=i)
            {
              fputs(acline,q);   
            }
            i=i+1;
         }
    }*/
    
    /*while(!feof(p))
    {
         fgets(acline,80,p);
         if(j!=i)
         {
              fputs(acline,q);   
         }
         i=i+1;
    }*/
    fclose(q);
    fclose(p);
    Sleep(400);
    clrscr();system("cls");
    textcolor(15);printf("Processing...");
    remove("teacher.txt");Sleep(1000);
    rename("zacv.txt","teacher.txt");
    Sleep(1000);
    clrscr();system("cls");
    textcolor(15);printf("Processing...");Sleep(400);
    clrscr();system("cls");
    Sleep(400);
    textcolor(10);printf("\n                            New list is\n");
    eli=0;b=0;
    textcolor(11);printf("____________________________________________________________________________\n");
    textcolor(11);printf("|");textcolor(12);printf("SNo ");textcolor(11);printf("| ");textcolor(12);printf("Teacher Name      ");textcolor(11);printf("| ");textcolor(12);printf("Initial ");textcolor(11);printf("| ");textcolor(12);printf("Qualifications    ");textcolor(11);printf("| ");textcolor(12);printf("YOE  ");textcolor(11);printf("| ");textcolor(12);printf("Mobile/Id  ");textcolor(11);printf("|\n");
    textcolor(15);
    p=fopen("teacher.txt","r");
    if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Main menu\n");getch();mainmenu();}
    fseek(p,0,SEEK_SET);b=0;lnbr=0;
    while (!feof(p))
    {
        for(nl=0;nl<80;nl++)
        acline[nl]=NULL;
        fgets(acline,80,p);
        if(!(strlen(acline)>10)) { }
        else
        {
            b=b+1;
            for(display=0;acline[display]!=0;display++)
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
    }
    fclose(p);
    if(lnbr==1)
    {textcolor(10);printf("\n\nNumber of teacher is ");textcolor(14);printf("%d \n",b);}
    else
    {textcolor(10);printf("\nNumber of teacher is ");textcolor(14);printf("%d \n",b);}
    
    textcolor(15); 
    printf("\nPress any key to return to admin menu");
    getch();
   	admin();
}

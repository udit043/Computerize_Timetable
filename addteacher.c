#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <coni.h>
#include <windows.h>

void admin();
void addteacher()
{
     clrscr();system("cls");
     char cond[]="yes";char op2[3]; int mob,mobp;      int i,y,flag,display,lm;char numb[10];

      FILE *p,*q;
      int q1,nl,tch=0;char q2[30];char initial[2];char acline[80];int yoe,pos=0;
      p = fopen("teacher.txt","a+");

      while (!feof(p))
       {
          for(nl=0;nl<80;nl++)
          acline[nl]=NULL;
          fgets(acline,80,p);
          if(!(strlen(acline)>10)) { pos=1; }
          else {tch=tch+1;}
       }


     textcolor(14);printf("\nYou can add ");textcolor(12);printf("%d",20-tch);textcolor(14);printf(" teachers more ");textcolor(11);printf(" [Max. limit is 20 teachers]\n");
     textcolor(10);printf("\nDo you want to add more Teacher ?");textcolor(13);printf(" (yes/no)\n");
     textcolor(15);
     fflush(stdin);
     gets(op2);
     if(!strcmp(op2,cond))
     {

        /* FILE *p;
         int q1,nl,tch=0;char q2[30];char initial[2];char acline[80];int yoe,pos=0;
         p = fopen("teacher.txt","a+");

                       while (!feof(p))
                       {
                           for(nl=0;nl<80;nl++)
                           acline[nl]=NULL;
                           fgets(acline,80,p);
                           if(!(strlen(acline)>10)) { pos=1; }
                           else {tch=tch+1;}
                       }*/

         do
         {
             if(tch>=20){ textcolor(9);printf("\nYou cannot add more teacher , delete some old teachers to add new teachers\n");fclose(p);textcolor(15);printf("\nPress any key to return to Admin menu");getch();admin(); }
             tch=tch+1;clrscr();system("cls");
             flag=2;
             for(mob=0;mob<2;)
             {
                mobp=wherey();textcolor(12);printf("\nEnter Teacher's Name\n");
                yoo:
                  {
                     gotoxy(1,mobp+2);textcolor(15);
                     fflush(stdin);
                     gets(q2);
                     if((strlen(q2)>=4)&&(strlen(q2)<30))
                     {break;}
                     else
                     {   textcolor(11);printf("Please enter your valid name\n");textcolor(10);printf("Name must contain more than 4 & less than 30 characters after 3 seconds");Sleep(3900);
                         gotoxy(1,mobp+2);
                         textcolor(0);printf("____________________________________________________________________________________");
                         gotoxy(1,mobp+3);printf("____________________________________________________________________________________");
                         gotoxy(1,mobp+4);printf("____________________________________________________________________________________");
                         goto yoo;
                     }
                  }
             }

              if(pos==1)
              { fprintf(p,"!%s!",q2); pos=0;}
              else
              { fprintf(p,"\n!%s!",q2);}
              fflush(stdin);
              for(q1=0;q1<strlen(q2);q1++)
              {
                  initial[0]=q2[0];
                  if(q2[q1]==' ')
                  {
                     initial[1]=q2[q1+1];
                     initial[2]='\0';
                     break;
                  }
                  else
                  {
                      initial[1]='\0';
                  }
              }
//               printf("Initial is %s \n",initial);
             fprintf(p,"%s!",initial);
             fflush(stdin);
             textcolor(12);printf("Enter Teacher's Qualifications\n");textcolor(15);
             fflush(stdin);
             gets(q2);
             fprintf(p,"%s!",q2);
             for(mob=0;mob<2;)
             {
                mobp=wherey();textcolor(12);printf("Enter Teacher's year of experience (0-30)\n");
                yoi:
                  {
                     gotoxy(1,mobp+1);textcolor(15);
                     fflush(stdin);
                     scanf("%d",&yoe);
                     if((yoe>=0)&&(yoe<31)) {break;}
                     else
                     {   textcolor(11);printf("Please enter valid teacher's year of experience number after 3 seconds");Sleep(2600);
                         gotoxy(1,mobp+1);
                         textcolor(0);printf("__________________________________________________________________________\n");
                         printf("__________________________________________________________________________\n");
                         goto yoi;
                     }
                  }
             }
             fprintf(p,"%d!",yoe);
             fflush(stdin);

             mobp=wherey();textcolor(12);printf("Enter Teacher's Mobile number(id) [Should be of 10 digits]\n");
             mb:
              {
                 gotoxy(1,mobp+1);textcolor(15);
                 fflush(stdin);
                 gets(q2);
                 fflush(stdin);
                 if(!(strlen(q2)==10))
                 {
                     textcolor(11);printf("Please enter 10 digit mobile number after 2 seconds");Sleep(2000);
                     gotoxy(1,mobp+1);
                     textcolor(0);printf("__________________________________________________________________________\n");
                     printf("__________________________________________________________________________\n");
                     goto mb;
                 }
                 else
                 {
                     q=fopen("teacher.txt","r");
                     for(lm=1;lm!=tch;lm++)
                     {
                         i=0;//printf("\n\n\n\n\n%d %d",lm,tch);
                         for(nl=0;nl<80;nl++)
                         acline[nl]=NULL;
                         for(nl=0;nl<10;nl++)
                         numb[nl]=NULL;
                         fgets(acline,80,q);
                         if(!(strlen(acline)>10)) { }
                         else {for(display=0;acline[display]!=0;display++)
                         {
                              if(acline[display]=='!')
                              {i=i+1;}

                              if(i==5){for(y=0;y<10;y++){numb[y]=acline[display+1+y];numb[10]='\0';}if(!(strcmp(q2,numb))){textcolor(11);printf("Please enter correct(unique) 10 digit mobile number after 2 seconds");Sleep(2000);
                     gotoxy(1,mobp+1);
                     textcolor(0);printf("__________________________________________________________________________\n");
                     printf("__________________________________________________________________________\n");
                     goto mb;}else{}}
                         }}
                     }
                     fclose(q);
                 }
              }

             fprintf(p,"%s!",q2);
             fflush(stdin);fflush(p);
             textcolor(14);printf("\nYou can add ");textcolor(12);printf("%d",20-tch);textcolor(14);printf(" teachers more ");textcolor(11);printf(" [Max. limit is 20 teachers]\n");
             textcolor(10);printf("\nDo you want to add more Teacher ?");textcolor(13);printf(" (yes/no)\n");textcolor(15);
             gets(q2);
         }while((!strcmp(q2,cond))&&(tch<=20));
           fclose(p);
           //if(tch==20){ textcolor(9);printf("\nYou cannot add more teacher , delete some old teachers to add new teachers\n"); }
     }
   fclose(p);textcolor(15);printf("\nPress any key to return to Admin menu");
   getch();
   admin();
}


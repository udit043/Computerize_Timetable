#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int i,clr,display,yy;
char acline[80];

FILE *p;
int view(char z,char in[2]);
void mainmenu();
void TviewTT()
{
  clrscr();system("cls");
  int y,eli,got,flag;
  eli=0;got=0;
  char code[10];
  gotoxy(20,4);textcolor(11);
  printf("Enter registered mobile number\n");textcolor(15);gotoxy(20,5);
  fflush(stdin);
  gets(code);
  fflush(stdin);
  p = fopen("teacher.txt","r");
  if(p==NULL) 
  {
      clrscr();system("cls");
      textcolor(10);
      printf("\n                           File is missing\n");textcolor(11);
      printf("                Press any key to go back to Main menu\n");
      getch();mainmenu();
  }
  fseek(p,0,SEEK_SET);
  while(!feof(p))
  {
      fgets(acline,80,p);
      for(display=0;acline[display]!=0;display++)
      {
          if(acline[display]=='!')
             {  i=i+1; }
          if(i==5)
          {
             for(y=0;y<10;y++)
             {
                 if(code[y]==acline[display+y+1])
                 { flag=1; }
                 else
                 { flag=0;i=0; break;}  
             }
             break;
          }
      }
      if(flag==1)
      {break;}
  }
   fclose(p);
   
   if(flag==1)
   {
      clrscr();
      gotoxy(30,1);textcolor(13);printf("Details found\n\n");
      textcolor(11);printf(" __________________________________________________________________________\n");
      printf("|");textcolor(15);printf("SNo ");textcolor(11);printf("| ");textcolor(15);printf("Teacher Name      ");textcolor(11);printf("| ");textcolor(15);printf("Initial ");textcolor(11);printf("| ");textcolor(15);printf("Qualifications    ");textcolor(11);printf("| ");textcolor(15);printf("YOE  ");textcolor(11);printf("| ");textcolor(15);printf("Mobile/Id  ");textcolor(11);printf("|\n");yy=wherey();textcolor(15);
      
      for(display=0;acline[display]!=0;display++)
      {
          if(acline[display]!='!')
          {
              textcolor(14);printf("%c",acline[display]);
          }
          else
          {
              if(eli==0)
              {textcolor(11);printf("|");textcolor(15);textcolor(14);printf("1");gotoxy(6,yy);textcolor(11);printf("|");gotoxy(8,yy);eli=eli+1;}
              else if(eli==1)
              {gotoxy(26,yy);textcolor(11);printf("|");gotoxy(28,yy);eli=eli+1;}
              else if(eli==2)
              {gotoxy(36,yy);textcolor(11);printf("|");gotoxy(38,yy);eli=eli+1;}
              else if(eli==3)
              {gotoxy(56,yy);textcolor(11);printf("|");gotoxy(58,yy);eli=eli+1;}
              else if(eli==4)
              {gotoxy(63,yy);textcolor(11);printf("|");gotoxy(65,yy);eli=eli+1;}
              else if(eli==5)
              {gotoxy(76,yy);textcolor(11);printf("|");eli=0;}
           }
           textcolor(15);
      }
      
      //---------------------------------------------------------------------------
      char cond[]="yes";char op1[3];char ini[2];i=0;
      textcolor(10);printf("\n\nDo you want to view your period ?");textcolor(13);printf("(yes/no)\n");
      fflush(stdin);
      textcolor(15);
      gets(op1);
      fflush(stdin);
      printf("\n");
      if(!strcmp(op1,cond))
      {
         for(display=0;acline[display]!=0;display++)
         {
             if(acline[display]=='!')
             {  i=i+1; }
             if(i==2)
             {
                for(y=0;y<2;y++)
                {
                    ini[y]=acline[display+y+1];
                    ini[2]='\0';i=0;
                }
                break;
             }
         }

/*1sem*/ p=fopen("1-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in First semester\n");textcolor(15);
             if(view('1',ini)) { }
             else
             { textcolor(12);printf("          You don't have any period in First semester\n\n"); }
         }
/*2sem*/ p=fopen("2-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Second semester\n");textcolor(15);
             if(view('2',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Second semester\n\n"); }
         }
/*3sem*/ p=fopen("3-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Third semester\n");textcolor(15);
             if(view('3',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Third semester\n\n"); }
         }
/*4sem*/ p=fopen("4-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Fourth semester\n");textcolor(15);
             if(view('4',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Fourth semester\n\n"); }
         }
/*5sem*/ p=fopen("5-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Fifth semester\n");textcolor(15);
             if(view('5',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Fifth semester\n\n"); }
         }
/*6sem*/ p=fopen("6-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Sixth semester\n");textcolor(15);
             if(view('6',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Sixth semester\n\n"); }
         }
/*7sem*/ p=fopen("7-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Seventh semester\n");textcolor(15);
             if(view('7',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Seventh semester\n\n"); }
         }
/*8sem*/ p=fopen("8-sem.txt","r");
         if(!p==0)
         {   fclose(p);
             got=1;
             textcolor(11);printf("Your period in Eighth semester\n");textcolor(15);
             if(view('8',ini)) { }
             else{ textcolor(12);printf("          You don't have any period in Eighth semester\n\n"); }
         }
         if(got==0)
         { textcolor(12);printf("Time-Table is not yet generated\n\n");textcolor(15);}      
      }      
   }
   if(flag==0)
   {
       gotoxy(20,6);
       textcolor(10);printf("Error , not valid id\n");gotoxy(20,8);  
   }
   textcolor(15);printf("Enter any key to return to main menu");
   getch();
   mainmenu();
}

int view(char z,char in[2])
{
     int gmt=0,nooftimes=0;i=0;
     char file4[10]=" -sem.txt";
     file4[0]=z;
     file4[10]='\0';
     //printf("..%c%c..\n",in[0],in[1]);
     p=fopen(file4,"r");
     while(!feof(p))
     {
          fgets(acline,80,p);nooftimes=0;
          for(display=0;acline[display]!=0;display++)
          {
               if((i==0)||(i==1))
               {
                   if(i==0) { textcolor(11);printf("%s",acline); }
                   if(i==1) { yy=wherey();textcolor(10);printf("%s",acline); textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]);textcolor(9);gotoxy(6,yy);printf("%c%c%c",acline[5],acline[6],acline[7]);textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} printf("\n");}
                   i=i+1;break;
               }
               if(acline[display]=='-')
               {
                   if(in[0]==acline[display+1])
                   {
                      if(in[1]==acline[display+2])
                      {
                          if(nooftimes==0) {yy=wherey();textcolor(15); printf("%s\n",acline);textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]); nooftimes=1;} gotoxy(display+2,yy); textcolor(12);printf("%c%c",acline[display+1],acline[display+2]); textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} printf("\n");gmt=1;
                      }
                   }
               }
          }
     }fclose(p);
     printf("\n");
     if(gmt==1)
     return(1);
     else
     return(0);
}

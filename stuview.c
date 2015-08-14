#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

char acline[80];
int j,i,display,clr,yy,app=0;

void mainmenu();
void colorview();
void stuview()
//int main(int argc, char *argv[])
{
     clrscr();system("cls");char bsem[10];
     char sem;char file4[10]=" -sem.txt";char dfile[11]=" -semd.txt";
     textcolor(10);printf("Enter your semester to view your Time Table ");textcolor(13);printf("(1-8)\n");
     fflush(stdin);
     textcolor(14);
     scanf("%s",&bsem);
     fflush(stdin);
     j=strlen(bsem);

     if(j!=1)
     {  textcolor(15);printf("Invalid choice\nPress any key to go back to main menu\n"); getch(); mainmenu(); }

     textcolor(15);
     fflush(stdin);
     sem=bsem[0];
     fflush(stdin);
     if(!(('0'<sem)&&(sem<'9'))) { printf("Invalid input\n\nPress any key to return to main menu");   getch();  mainmenu(); }
     file4[0]=sem;
     file4[10]='\0';
     dfile[0]=sem;
     dfile[11]='\0';
     FILE *p;
     p=fopen(file4,"r");
     if(!p==0)
     {  textcolor(12);printf("Time Table : \n");textcolor(15);
        while(!feof(p))
        {
           
           for(i=0;i<8;i++)
                {fgets(acline,80,p);
                   if((i==0)||(i==1))
                   {
                      if(i==0) { textcolor(11);printf("%s",acline); }
                      if(i==1) { yy=wherey();textcolor(6);printf("%s",acline); textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]);textcolor(9);gotoxy(6,yy);printf("%c%c%c",acline[5],acline[6],acline[7]);textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} printf("\n");}
                   }
                   else if ((i>1)&&(i<7)) {yy=wherey();textcolor(15); printf("%s",acline);textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]); gotoxy(18,yy); textcolor(12); textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");}colorview();printf("\n");}
                   else { textcolor(11); printf("%s",acline); }
                }
        }fclose(p);
     }
     else
     {
        FILE *p;
        p=fopen(dfile,"r");
        if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Main menu\n");getch();mainmenu();}
        textcolor(12);printf("Time Table is not yet generated , Default Time Table  : \n");textcolor(15);
        while(!feof(p))
        {
           
           for(i=0;i<8;i++)
                {fgets(acline,80,p);
                   if((i==0)||(i==1))
                   {
                      if(i==0) { textcolor(11);printf("%s",acline); }
                      if(i==1) { yy=wherey();textcolor(6);printf("%s",acline); textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]);textcolor(9);gotoxy(6,yy);printf("%c%c%c",acline[5],acline[6],acline[7]);textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} printf("\n");}
                   }
                   else if ((i>1)&&(i<7)) {yy=wherey();textcolor(15); printf("%s",acline);textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]); gotoxy(18,yy); textcolor(12); textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} colorview();printf("\n");}
                   else { textcolor(11); printf("%s",acline); }
                }
         }fclose(p);
     }
     printf("\n");
     textcolor(13);printf("\nSubjects in this semester are\n\n");textcolor(15);
     if(sem=='1')
     {
        printf("1 - Engg. Chemistry ");textcolor(10);printf("(CH)");textcolor(15);printf("\n2 - Communication Skills ");textcolor(11);printf("(CH)");textcolor(15);printf("\n3 - Engg. Graphics ");textcolor(12);printf("(ED)");textcolor(15);printf("\n4 - Engg. Maths-I ");textcolor(14);printf("(M1)");textcolor(15);printf("\n5 - Basic Electrical & Electronics Engg. ");textcolor(13);printf("(BEEE)\n");textcolor(15);
     }
     else if(sem=='2')
     {
        printf("1 - Basic Computer Programming ");textcolor(10);printf("(C)");textcolor(15);printf("\n2 - Basic Civil Engg. & Engg. Mechanics ");textcolor(11);printf("(CE)");textcolor(15);printf("\n3 - Engg. Physics ");textcolor(12);printf("(PHY)");textcolor(15);printf("\n4 - Engg. Maths-II ");textcolor(14);printf("(M2)");textcolor(15);printf("\n5 - Basic Mechanical Engg. ");textcolor(13);printf("(MECH)\n");textcolor(15);
     }
     else if(sem=='3')
     {
        printf("1 - Engg. Maths-III ");textcolor(10);printf("(M3)");textcolor(15);printf("\n2 - Electronics & Digital Circuits ");textcolor(11);printf("(EDC)");textcolor(15);printf("\n3 - Object Oriented Methodolgy ");textcolor(12);printf("(OOM)");textcolor(15);printf("\n4 - Data Structure & Algorithm ");textcolor(14);printf("(DSA)");textcolor(15);printf("\n5 - Energy Ecology Env. & Society ");textcolor(13);printf("(EEES)\n");textcolor(15);
     }
     else if(sem=='4')
     {
        printf("1 - Computer Architecture ");textcolor(10);printf("(CA)");textcolor(15);printf("\n2 - Discrete Structure ");textcolor(11);printf("(DS)");textcolor(15);printf("\n3 - Principle of Communication ");textcolor(12);printf("(POC)");textcolor(15);printf("\n4 - Analysis Design & Alogorithm ");textcolor(14);printf("(ADA)");textcolor(15);printf("\n5 - Data Base Manag. System ");textcolor(13);printf("(DBMS)\n");textcolor(15);
     }
     else if(sem=='5')
     {
        printf("1 - Computer Network ");textcolor(10);printf("(CN)");textcolor(15);printf("\n2 - Software Engg. ");textcolor(11);printf("(SE)");textcolor(15);printf("\n3 - Operating System ");textcolor(12);printf("(OS)");textcolor(15);printf("\n4 - Information Theory & Coding ");textcolor(14);printf("(ITC)");textcolor(15);printf("\n5 - I.T. Enabled Services , Ethics & Manag. ");textcolor(13);printf("(ESEM)\n");textcolor(15);
     }
     else if(sem=='6')
     {
        printf("1 - Microprocessor & Interfacing ");textcolor(10);printf("(MI)");textcolor(15);printf("\n2 - Automata & Compiler Design ");textcolor(11);printf("(ACD)");textcolor(15);printf("\n3 - Mgmt Information System ");textcolor(12);printf("(MIS)");textcolor(15);printf("\n4 - E-comerce & Governance ");textcolor(14);printf("(ECG)");textcolor(15);printf("\n5 - Intemate & Web Technology ");textcolor(13);printf("(IWT)\n");textcolor(15);
     }
     else if(sem=='7')
     {
        printf("1 - Machine Learning ");textcolor(10);printf("(ML)");textcolor(15);printf("\n2 - Embedded System ");textcolor(11);printf("(ES)");textcolor(15);printf("\n3 - Simmulation & Modeling ");textcolor(12);printf("(SM)");textcolor(15);printf("\n4 - Elective - I ");textcolor(14);printf("(E1)");textcolor(15);printf("\n5 - Wireless & Mobile Computing ");textcolor(13);printf("(WMC)\n");textcolor(15);
     }
     else if(sem=='8')
     {
        printf("1 - Information Security ");textcolor(10);printf("(IS)");textcolor(15);printf("\n2 - Network Management ");textcolor(11);printf("(NM)");textcolor(15);printf("\n3 - Data Mining & Data Warehousing ");textcolor(12);printf("(DMW)");textcolor(15);printf("\n4 - Elective - II ");textcolor(14);printf("(E2)");textcolor(15);printf("\n");
     }
     
     //textcolor(12);printf("\nNote : ");
     if(app==1)
     {
       textcolor(15);printf("\n             (");
       textcolor(12);printf("__");
       textcolor(10);printf(" means");
       textcolor(14);printf(" Subject is not filled");
       textcolor(15);printf(")\n");app=0;
     } 
     textcolor(15);printf("\nPress any key to return to main menu");
     getch();
     mainmenu();
}

void colorview()
{
   yy=wherey();
   for(display=17;display<65;display=display+11) 
   { 
      
      if(acline[display]=='A')
      {
        if(acline[display+1]=='D')
        {
          gotoxy(display+1,yy);textcolor(14);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
        }
        else
        {
          gotoxy(display+1,yy);textcolor(11);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
        }
      }
//---------------------------------------------------------------------------------------------------------------------------------------
      else if(acline[display]=='B')
      {
        gotoxy(display+1,yy);textcolor(13);printf("%c%c%c%c",acline[display],acline[display+1],acline[display+2],acline[display+3]);
      }
//---------------------------------------------------------------------------------------------------------------------------------------
      else if(acline[display]=='C')
      {
        if((acline[display+1]=='A')||(acline[display+1]=='H')||(acline[display+1]=='N'))
        {
          gotoxy(display+1,yy);textcolor(10);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
        }
        else if((acline[display+1]=='E')||(acline[display+1]=='S'))
        {
          gotoxy(display+1,yy);textcolor(11);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
        }
        else
        {
          gotoxy(display+1,yy);textcolor(10);printf("%c",acline[display]);
        }
      }
//---------------------------------------------------------------------------------------------------------------------------------------
      else if(acline[display]=='D')
      {  
        if(acline[display+1]=='S')
        {
          if(acline[display+2]=='A')
          {           
            gotoxy(display+1,yy);textcolor(14);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
          }
          else
	      {
	        gotoxy(display+1,yy);textcolor(11);printf("%c%c",acline[display],acline[display+1]);
	      }
        }
	else if(acline[display+1]=='M')
	{
	  gotoxy(display+1,yy);textcolor(12);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
	}
	else if(acline[display+1]=='B')
	{
	  gotoxy(display+1,yy);textcolor(13);printf("%c%c%c%c",acline[display],acline[display+1],acline[display+2],acline[display+3]);
	}
      }
//---------------------------------------------------------------------------------------------------------------------------------------
      else if(acline[display]=='E')
	  {
	    if((acline[display+1]=='1')||(acline[display+1]=='2')||(acline[display+1]=='C'))
		{
		  gotoxy(display+1,yy);textcolor(14);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
		}
	    else if(acline[display+1]=='D')
		{
		  if(acline[display+2]=='C')
		  {
		    gotoxy(display+1,yy);textcolor(11);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
		  }
		  else
		  {
		    gotoxy(display+1,yy);textcolor(12);printf("%c%c",acline[display],acline[display+1]);
		  }
		}
	    else if(acline[display+1]=='S')
		{
		  if(acline[display+2]=='E')
		  {
		    gotoxy(display+1,yy);textcolor(13);printf("%c%c%c%c",acline[display],acline[display+1],acline[display+2],acline[display+3]);
		  }
		  else
		  {
		    gotoxy(display+1,yy);textcolor(11);printf("%c%c",acline[display],acline[display+1]);
		  }
		}
	    else
		{
		  gotoxy(display+1,yy);textcolor(13);printf("%c%c%c%c",acline[display],acline[display+1],acline[display+2],acline[display+3]);
		}
	  }
//---------------------------------------------------------------------------------------------------------------------------------------
      else if(acline[display]=='I')
	  {
	    if(acline[display+1]=='S')
		{
		  gotoxy(display+1,yy);textcolor(10);printf("%c%c",acline[display],acline[display+1]);
		}
		else if(acline[display+1]=='W')
		{
		  gotoxy(display+1,yy);textcolor(13);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
		}
		else
		{
		  gotoxy(display+1,yy);textcolor(14);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
		 }
	  }
//-----------------------------------------------------------------------------------------------------------------------------------
	  else if(acline[display]=='M')
	  {
	    if((acline[display+1]=='1')||(acline[display+1]=='2'))
		{
		  gotoxy(display+1,yy);textcolor(14);printf("%c%c",acline[display],acline[display+1]);
		}
		else if((acline[display+1]=='3')||(acline[display+1]=='L'))
		{
		  gotoxy(display+1,yy);textcolor(10);printf("%c%c",acline[display],acline[display+1]);
		}
		else if(acline[display+1]=='I')
		{
		  if(acline[display+2]=='S')
		  {
		    gotoxy(display+1,yy);textcolor(12);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
		  }
		  else
		  {
		    gotoxy(display+1,yy);textcolor(10);printf("%c%c",acline[display],acline[display+1]);
		  }
		}
		else
		{
		  gotoxy(display+1,yy);textcolor(13);printf("%c%c%c%c",acline[display],acline[display+1],acline[display+2],acline[display+3]);
		}
	  }
//---------------------------------------------------------------------------------------------------------------------------------------
      else if(acline[display]=='N')
	  {
	    if(acline[display+1]=='M')
	    {
           gotoxy(display+1,yy);textcolor(11);printf("%c%c",acline[display],acline[display+1]);
        }
        else
        {
           app=1;gotoxy(display+1,yy);textcolor(15);printf("___");
	    }
     }
//---------------------------------------------------------------------------------------------------------------------------------------
	  else if(acline[display]=='S')
	  {
	    if(acline[display+1]=='M')
        {
          gotoxy(display+1,yy);textcolor(12);printf("%c%c",acline[display],acline[display+1]);
        }
        else
        {
          gotoxy(display+1,yy);textcolor(11);printf("%c%c",acline[display],acline[display+1]);
        }
      }
//---------------------------------------------------------------------------------------------------------------------------------------
   else if((acline[display]=='O')||(acline[display]=='P'))
   {
     if(acline[display+1]=='H')
	 {
	    gotoxy(display+1,yy);textcolor(12);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
	 }
	 else
	 {
	   gotoxy(display+1,yy);textcolor(12);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
	 }
   }
//---------------------------------------------------------------------------------------------------------------------------------------
   else
   {
     gotoxy(display+1,yy);textcolor(13);printf("%c%c%c",acline[display],acline[display+1],acline[display+2]);
   } 
 }
}

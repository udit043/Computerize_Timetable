#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void calender()
//int main()
{
    d: 
    {  
        clrscr();system("cls");
        FILE *p;
        char calen[80]; int a,b,choice;
        textcolor(10);printf("Press ");
        textcolor(15);
        printf("\n\n1 - To View National Holiday\n2 - To View Public Holiday\n3 - To View both list\n");
        textcolor(13);printf("\nEnter your choice : ");
        fflush(stdin);
        textcolor(14);scanf("%d",&choice);
        fflush(stdin);
        switch(choice)
        {    
        case 1:
            {
              clrscr();
              textcolor(11);printf("National Holidays\n\n");
              textcolor(15);printf("Jan-26-Republic Day\nAug-15-Independence Day\nOct-2-Gandhi Jayanti\n\n");
              break;
            }
        case 2:
            {
              clrscr();system("cls");
              p = fopen("public.txt","r");
              if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Main menu\n");getch();mainmenu();}
              fseek(p,0,SEEK_SET);
              clrscr();
              textcolor(11);printf("Public Holidays\n");
              while (!feof(p))
              {
                fgets(calen,80,p);
                if((calen[0]=='1')&&(calen[1]=='@'))
                { textcolor(12);printf("\nJanuary\n"); textcolor(15);}
                else if((calen[0]=='2')&&(calen[1]=='@'))
                { textcolor(12);printf("\nFebruary\n"); textcolor(15);}
                else if((calen[0]=='3')&&(calen[1]=='@'))
                { textcolor(12);printf("\nMarch\n"); textcolor(15);}
                else if((calen[0]=='4')&&(calen[1]=='@'))
                { textcolor(12);printf("\nApril\n"); textcolor(15);}
                else if((calen[0]=='5')&&(calen[1]=='@'))
                { textcolor(12);printf("\nMay\n"); textcolor(15);}
                else if((calen[0]=='6')&&(calen[1]=='@'))
                { textcolor(12);printf("\nJune\n"); textcolor(15);}
                else if((calen[0]=='7')&&(calen[1]=='@'))
                { textcolor(12);printf("\nJuly\n"); textcolor(15);}
                else if((calen[0]=='8')&&(calen[1]=='@'))
                { textcolor(12);printf("\nAugust\n"); textcolor(15);}
                else if((calen[0]=='9')&&(calen[1]=='@'))
                { textcolor(12);printf("\nSeptember\n"); textcolor(15);}
                else if((calen[0]=='1')&&(calen[1]=='0')&&(calen[2]=='@'))
                { textcolor(12);printf("\nOctober\n"); textcolor(15);}
                else if((calen[0]=='1')&&(calen[1]=='1')&&(calen[2]=='@'))
                { textcolor(12);printf("\nNovember\n"); textcolor(15);}
                else if((calen[0]=='1')&&(calen[1]=='2')&&(calen[2]=='@'))
                { textcolor(12);printf("\nDecember\n"); textcolor(15);}
                else { printf("%s",calen); }
                
              }
              fclose(p);
              printf("\n\n");
              break;
            }
     case 3:
            {
              clrscr();system("cls");
              textcolor(11);printf("National Holidays\n\n");
              textcolor(15);printf("Jan-26-Republic Day\nAug-15-Independence Day\nOct-2-Gandhi Jayanti\n\n");
              p = fopen("public.txt","r");
              if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Main menu\n");getch();mainmenu();}
              fseek(p,0,SEEK_SET);
              textcolor(11);printf("Public Holidays\n");
              while (!feof(p))
              {
                fgets(calen,80,p);
                if((calen[0]=='1')&&(calen[1]=='@'))
                { textcolor(12);printf("\nJanuary\n"); textcolor(15);}
                else if((calen[0]=='2')&&(calen[1]=='@'))
                { textcolor(12);printf("\nFebruary\n"); textcolor(15);}
                else if((calen[0]=='3')&&(calen[1]=='@'))
                { textcolor(12);printf("\nMarch\n"); textcolor(15);}
                else if((calen[0]=='4')&&(calen[1]=='@'))
                { textcolor(12);printf("\nApril\n"); textcolor(15);}
                else if((calen[0]=='5')&&(calen[1]=='@'))
                { textcolor(12);printf("\nMay\n"); textcolor(15);}
                else if((calen[0]=='7')&&(calen[1]=='@'))
                { textcolor(12);printf("\nJuly\n"); textcolor(15);}
                else if((calen[0]=='8')&&(calen[1]=='@'))
                { textcolor(12);printf("\nAugust\n"); textcolor(15);}
                else if((calen[0]=='9')&&(calen[1]=='@'))
                { textcolor(12);printf("\nSeptember\n"); textcolor(15);}
                else if((calen[1]=='0')&&(calen[2]=='@'))
                { textcolor(12);printf("\nOctober\n"); textcolor(15);}
                else if((calen[1]=='1')&&(calen[2]=='@'))
                { textcolor(12);printf("\nNovember\n"); textcolor(15);}
                else if((calen[1]=='2')&&(calen[2]=='@'))
                { textcolor(12);printf("\nDecember\n"); textcolor(15);}
                else { printf("%s",calen); }
              }
              fclose(p);
              printf("\n\n");
              break;
            }      
     default : { clrscr();system("cls"); printf("Invalid  input , Press any key to go back to menu\n"); getch(); goto d;}
    }
 }
}

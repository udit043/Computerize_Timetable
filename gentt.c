#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
//void mainmenu();
void admin();
void genTT()
//int main()
{
     clrscr();system("cls");
     FILE *q;
     char line[25];char sem;int subsem=0;int tr,tc;char bsem[10];int j1;
     char sub1[4];char sub2[5];char sub3[5];char sub4[5];char sub5[6];
     textcolor(11);printf("Generate Time-Table\nEnter semseter (1-8) to view related subjects\n");
     textcolor(14);
     fflush(stdin);
     scanf("%s",&bsem);
     fflush(stdin);
     j1=strlen(bsem);
     if(j1==1)
  {
     sem=bsem[0];
     fflush(stdin);
     Sleep(300);
     clrscr();system("cls");
     gotoxy(1,10);
     if((sem<'9')&&(sem>'0'))
      {
         textcolor(9);printf("Subjects are\n");
         fflush(stdin);
         q=fopen("subtt.txt","r");
         if(q==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Admin menu\n");getch();admin();}
         fseek(q,0,SEEK_SET);
         while(!feof(q))
         {
            fgets(line,25,q);
            if((line[0]==sem) && (subsem==0)) //1-sem  1-CH,CS,ED,M1,BEEE
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Engg. Chemistry\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Communication Skills\n");
               //----------------
               sub3[0]=line[8];
               sub3[1]=line[9];
               sub3[2]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Engg. Graphics\n");
               //----------------
               sub4[0]=line[11];
               sub4[1]=line[12];
               sub4[2]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Engg. Maths-I\n");
               //----------------
               sub5[0]=line[14];
               sub5[1]=line[15];
               sub5[2]=line[16];
               sub5[3]=line[17];
               sub5[4]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- Basic Electrical & Electronics Engg.\n");
               break;
               //----------------
            }
           else if((line[0]==sem) && (subsem==1))//2-sem  2-C,CE,M2,PHY,MECH
            {
               sub1[0]=line[2];
               sub1[1]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Basic Computer Programming\n");
               //----------------
               sub2[0]=line[4];
               sub2[1]=line[5];
               sub2[2]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Basic Civil Engg. & Engg. Mechanics\n");
               //----------------
               sub3[0]=line[7];
               sub3[1]=line[8];
               sub3[2]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Engg. Maths-II\n");
               //----------------
               sub4[0]=line[10];
               sub4[1]=line[11];
               sub4[2]=line[12];
               sub4[3]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Engg. Physics\n");
               //----------------
               sub5[0]=line[14];
               sub5[1]=line[15];
               sub5[2]=line[16];
               sub5[3]=line[17];
               sub5[4]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- Basic Mechanical Engg.\n");
               break;
               //----------------
            }     
           else if((line[0]==sem) && (subsem==2))//3-sem  3-M3,EDC,OOM,DSA,EEES
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Engg. Maths-III\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]=line[7];
               sub2[3]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Electronics & Digital Circuits\n");
               //----------------
               sub3[0]=line[9];
               sub3[1]=line[10];
               sub3[2]=line[11];
               sub3[3]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Object Oriented Methodolgy\n");
               //----------------
               sub4[0]=line[13];
               sub4[1]=line[14];
               sub4[2]=line[15];
               sub4[3]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Data Structure & Algorithm\n");
               //----------------
               sub5[0]=line[17];
               sub5[1]=line[18];
               sub5[2]=line[19];
               sub5[3]=line[20];
               sub5[4]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- Energy Ecology Env. & Society\n");
               break;
               //----------------
            }
           else if((line[0]==sem) && (subsem==3))//4-sem  4-CA,DS,POC,ADA,DBMS
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Computer Architecture\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Discrete Structure\n");
               //----------------
               sub3[0]=line[8];
               sub3[1]=line[9];
               sub3[2]=line[10];
               sub3[3]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Principle of Communication\n");
               //----------------
               sub4[0]=line[12];
               sub4[1]=line[13];
               sub4[2]=line[14];
               sub4[3]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Analysis Design & Alogorithm\n");
               //----------------
               sub5[0]=line[16];
               sub5[1]=line[17];
               sub5[2]=line[18];
               sub5[3]=line[19];
               sub5[4]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- Data Base Manag. System\n");
               break;
               //----------------
            }
           else if((line[0]==sem) && (subsem==4))//5-sem  5-CN,SE,OS,ITC,ESEM
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Computer Network\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Software Engg.\n");
               //----------------
               sub3[0]=line[8];
               sub3[1]=line[9];
               sub3[2]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Operating System\n");
               //----------------
               sub4[0]=line[11];
               sub4[1]=line[12];
               sub4[2]=line[13];
               sub4[3]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Information Theory & Coding\n");
               //----------------
               sub5[0]=line[15];
               sub5[1]=line[16];
               sub5[2]=line[17];
               sub5[3]=line[18];
               sub5[4]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- I.T. Enabled Services , Ethics & Manag.\n");
               break;
               //----------------
            }
           else if((line[0]==sem) && (subsem==5))//6-sem  6-MI,ACD,MIS,ECG,IWT
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Microprocessor & Interfacing\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]=line[7];
               sub2[3]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Automata & Compiler Design\n");
               //----------------
               sub3[0]=line[9];
               sub3[1]=line[10];
               sub3[2]=line[11];
               sub3[3]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Mgmt Information System\n");
               //----------------
               sub4[0]=line[13];
               sub4[1]=line[14];
               sub4[2]=line[15];
               sub4[3]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- E-comerce & Governance\n");
               //----------------
               sub5[0]=line[17];
               sub5[1]=line[18];
               sub5[2]=line[19];
               sub5[3]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- Intemate & Web Technology\n");
               break;
               //----------------
            }
           else if((line[0]==sem) && (subsem==6))//7-sem  7-ML,ES,SM,EI,WMC
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Machine Learning\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Embedded System\n");
               //----------------
               sub3[0]=line[8];
               sub3[1]=line[9];
               sub3[2]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Simmulation & Modeling\n");
               //----------------
               sub4[0]=line[11];
               sub4[1]=line[12];
               sub4[2]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Elective\n");
               //----------------
               sub5[0]=line[14];
               sub5[1]=line[15];
               sub5[2]=line[16];
               sub5[3]='\0';
               textcolor(12);printf("5-");puts(sub5);gotoxy(8,15);textcolor(15);printf("- Wireless & Mobile Computing\n");
               break;
               //----------------
            }
           else if((line[0]==sem) && (subsem==7))//8-sem  8-IS,NM,DMW,E2
            {
               sub1[0]=line[2];
               sub1[1]=line[3];
               sub1[2]='\0';
               textcolor(10);printf("1-");puts(sub1);gotoxy(8,11);textcolor(15);printf("- Information Security\n");
               //----------------
               sub2[0]=line[5];
               sub2[1]=line[6];
               sub2[2]='\0';
               textcolor(11);printf("2-");puts(sub2);gotoxy(8,12);textcolor(15);printf("- Network Management\n");
               //----------------
               sub3[0]=line[8];
               sub3[1]=line[9];
               sub3[2]=line[10];
               sub3[3]='\0';
               textcolor(13);printf("3-");puts(sub3);gotoxy(8,13);textcolor(15);printf("- Data Mining & Data Warehousing\n");
               //----------------
               sub4[0]=line[12];
               sub4[1]=line[13];
               sub4[2]='\0';
               textcolor(14);printf("4-");puts(sub4);gotoxy(8,14);textcolor(15);printf("- Elective - II\n");
               break;
               //----------------
            }
            subsem=subsem+1;
        }  
        fflush(stdin);
        fclose(q);
        printf("\n");
     }
     else
     {
         clrscr();system("cls");textcolor(15);printf("Choice is not correct\nPress any key to go back to Admin menu\n"); getch(); admin();
     }
  }
  else
  {
     clrscr();system("cls");textcolor(15);printf("Choice is not correct\nPress any key to go back to Admin menu\n"); getch(); admin();
  }
  
//-----------------------------------------------------------------------------------
     textcolor(9);printf("Available Teacher's \n");textcolor(15);
     char acline[80];char teachini[40]="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
     int init,nul;int ini1=0;int b=0;int b1=0;
     FILE *p;
     p = fopen("teacher.txt","r");
     if(p==NULL) {clrscr();system("cls");textcolor(10);printf("\n                           File is missing\n");textcolor(11);printf("                Press any key to go back to Admin menu\n");getch();admin();}
     fseek(p,0,SEEK_SET);
     while (!feof(p))
     {
         b=b+1;
         for(nul=0;nul<80;nul++)
         acline[nul]=NULL;
         fgets(acline,80,p);
         for(init=1;acline[init]!=0;init++)
         {
             if((acline[init]=='!'))
             { 
                 teachini[ini1]=acline[init+1];
                 if((acline[init+2]!='!'))
                 { teachini[ini1+1]=acline[init+2]; ini1=ini1+2;break;}
                 else
                 { teachini[ini1+1]=' ';ini1=ini1+2;break; }
             }
         }
     }
     fclose(p);
     for(init=0;init<2*b;init=init+2)
     {
         b1=b1+1;
         printf("%d-%c%c\n",b1,teachini[init],teachini[init+1]);
     }
     textcolor(15);
     gotoxy(1,1); int subnum=0;
     textcolor(12);printf("    Enter subject's number ");textcolor(11);printf("Press ");textcolor(10);printf("99 ");textcolor(11);printf("to return to Admin menu ");textcolor(10);printf("immediately\n");textcolor(15);
     textcolor(11);printf("    __________________________________________________________________\n");
     //printf("   | Day       | Period 1 | Period 2 | Period 3 | Period 4 | Period 5 |\n");
     textcolor(11);printf("   | ");textcolor(15);printf("Day       ");textcolor(11);printf("| ");textcolor(15);printf("Period 1 ");textcolor(11);printf("| ");textcolor(15);printf("Period 2 ");textcolor(11);printf("| ");textcolor(15);printf("Period 3 ");textcolor(11);printf("| ");textcolor(15);printf("Period 4 ");textcolor(11);printf("| ");textcolor(15);printf("Period 5 ");textcolor(11);printf("|\n");
     printf("   | ");textcolor(15);printf("Monday    ");textcolor(11);printf("|");gotoxy(27,4);textcolor(11);printf("|");gotoxy(38,4);printf("|");gotoxy(49,4);printf("|");gotoxy(60,4);printf("|");gotoxy(71,4);printf("|\n");
     printf("   | ");textcolor(15);printf("Tuesday   ");textcolor(11);printf("|");gotoxy(27,5);textcolor(11);printf("|");gotoxy(38,5);printf("|");gotoxy(49,5);printf("|");gotoxy(60,5);printf("|");gotoxy(71,5);printf("|\n");
     printf("   | ");textcolor(15);printf("Wednesday ");textcolor(11);printf("|");gotoxy(27,6);textcolor(11);printf("|");gotoxy(38,6);printf("|");gotoxy(49,6);printf("|");gotoxy(60,6);printf("|");gotoxy(71,6);printf("|\n");
     printf("   | ");textcolor(15);printf("Thursday  ");textcolor(11);printf("|");gotoxy(27,7);textcolor(11);printf("|");gotoxy(38,7);printf("|");gotoxy(49,7);printf("|");gotoxy(60,7);printf("|");gotoxy(71,7);printf("|\n");
     printf("   | ");textcolor(15);printf("Friday    ");textcolor(11);printf("|");gotoxy(27,8);textcolor(11);printf("|");gotoxy(38,8);printf("|");gotoxy(49,8);printf("|");gotoxy(60,8);printf("|");gotoxy(71,8);printf("|\n");
     textcolor(11);printf("    ------------------------------------------------------------------");textcolor(15);
     printf("\n");
  
     for(tr=4;tr<9;tr++)
     {//4-5-6-7-8
        for(tc=18;tc<63;tc=tc+11)
        {
            gotoxy(tc,tr);  //18-29-40-51-62
            fflush(stdin);
            scanf("%d",&subnum);
            if(subnum==1){gotoxy(tc,tr);textcolor(10);puts(sub1);textcolor(15);}
            else if(subnum==2){gotoxy(tc,tr);textcolor(11);puts(sub2);textcolor(15);}
            else if(subnum==3){gotoxy(tc,tr);textcolor(13);puts(sub3);textcolor(15);}
            else if(subnum==4){gotoxy(tc,tr);textcolor(14);puts(sub4);textcolor(15);}
            else if(subnum==5){gotoxy(tc,tr);textcolor(12);puts(sub5);textcolor(15);}
            else if(subnum==99){system("cls");clrscr();printf("Returning to Admin menu");admin();}
            else {gotoxy(tc,tr);printf("N/A");}
        }
     }      
//---------------------------------------------------------------------
     gotoxy(1,1);
     textcolor(12);printf("    Enter teacher's number\n");textcolor(15);
     for(tr=4;tr<9;tr++)
     {//4-5-6-7-8
        for(tc=22;tc<67;tc=tc+11)
        {
            gotoxy(tc,tr);  //18-29-40-51-62
            fflush(stdin);
            scanf("%d",&subnum);
            if(subnum==1){gotoxy(tc,tr);printf("-%c%c\n",teachini[0],teachini[1]);}
            else if(subnum==2){gotoxy(tc,tr);printf("-%c%c\n",teachini[2],teachini[3]);}
            else if(subnum==3){gotoxy(tc,tr);printf("-%c%c\n",teachini[4],teachini[5]);}
            else if(subnum==4){gotoxy(tc,tr);printf("-%c%c\n",teachini[6],teachini[7]);}
            else if(subnum==5){gotoxy(tc,tr);printf("-%c%c\n",teachini[8],teachini[9]);}
            else if(subnum==6){gotoxy(tc,tr);printf("-%c%c\n",teachini[10],teachini[11]);}
            else if(subnum==7){gotoxy(tc,tr);printf("-%c%c\n",teachini[12],teachini[13]);}
            else if(subnum==8){gotoxy(tc,tr);printf("-%c%c\n",teachini[14],teachini[15]);}
            else if(subnum==9){gotoxy(tc,tr);printf("-%c%c\n",teachini[16],teachini[17]);}
            else if(subnum==10){gotoxy(tc,tr);printf("-%c%c\n",teachini[18],teachini[19]);}
            else if(subnum==11){gotoxy(tc,tr);printf("-%c%c\n",teachini[20],teachini[21]);}
            else if(subnum==12){gotoxy(tc,tr);printf("-%c%c\n",teachini[22],teachini[23]);}
            else if(subnum==13){gotoxy(tc,tr);printf("-%c%c\n",teachini[24],teachini[25]);}
            else if(subnum==14){gotoxy(tc,tr);printf("-%c%c\n",teachini[26],teachini[27]);}
            else if(subnum==15){gotoxy(tc,tr);printf("-%c%c\n",teachini[28],teachini[29]);}
            else if(subnum==16){gotoxy(tc,tr);printf("-%c%c\n",teachini[30],teachini[31]);}
            else if(subnum==17){gotoxy(tc,tr);printf("-%c%c\n",teachini[32],teachini[33]);}
            else if(subnum==18){gotoxy(tc,tr);printf("-%c%c\n",teachini[34],teachini[35]);}
            else if(subnum==19){gotoxy(tc,tr);printf("-%c%c\n",teachini[36],teachini[37]);}
            else if(subnum==20){gotoxy(tc,tr);printf("-%c%c\n",teachini[38],teachini[39]);}
            else if(subnum==99){system("cls");clrscr();printf("Returning to Admin menu");admin();}
            else {gotoxy(tc,tr);printf("-XX");}
        }
     }

     int y1;
     char buf1[80];char buf2[80];char buf3[80];char buf4[80];
     char buf5[80];char buf6[80];char buf7[80];char buf8[80];
     for(y1=1;y1<9;y1++)
     {
        COORD coord = {0,y1};
        DWORD num_read;
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        if(y1==1)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf1,(DWORD) 70,coord,(LPDWORD) &num_read);
            buf1[70]='\0';
        }
       else if(y1==2)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf2,(DWORD) 71,coord,(LPDWORD) &num_read);
            buf2[71]='\0';
        }
       else if(y1==3)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf3,(DWORD) 71,coord,(LPDWORD) &num_read);
            buf3[71]='\0';
        }
       else if(y1==4)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf4,(DWORD) 71,coord,(LPDWORD) &num_read);
            buf4[71]='\0';
        }
       else if(y1==5)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf5,(DWORD) 71,coord,(LPDWORD) &num_read);
            buf5[71]='\0';
        }
       else if(y1==6)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf6,(DWORD) 71,coord,(LPDWORD) &num_read);
            buf6[71]='\0';
        }
       else if(y1==7)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf7,(DWORD) 71,coord,(LPDWORD) &num_read);
            buf7[71]='\0';
        }
       else if(y1==8)
        {
            ReadConsoleOutputCharacter(hConsole,(LPTSTR) buf8,(DWORD) 70,coord,(LPDWORD) &num_read);
            buf8[70]='\0';
        }
     }
     clrscr();system("cls");
     textcolor(10);printf("Do you want to save the time table ?");textcolor(13);printf("(yes/no)\n");
     char cond[]="yes";char op[3];int flag=0;
     char file[10]=" -sem.txt";
     file[0]=sem;
     file[10]='\0';
     fflush(stdin);
     textcolor(15);
     gets(op);
     fflush(stdin);
     if(!strcmp(op,cond)) 
      {
         q=fopen(file,"w");
         fseek(q,0,SEEK_SET);
         fprintf(q,"%s\n",buf1);
         fprintf(q,"%s\n",buf2);
         fprintf(q,"%s\n",buf3);
         fprintf(q,"%s\n",buf4);
         fprintf(q,"%s\n",buf5);
         fprintf(q,"%s\n",buf6);
         fprintf(q,"%s\n",buf7);
         fprintf(q,"%s",buf8);
         fclose(q);
         flag=1;
      }
     if(flag==1)
     {
       textcolor(10);printf("\nDo you want to view the time table ?");textcolor(13);printf("(yes/no)\n");
       fflush(stdin);
       textcolor(15);
       gets(op);
       fflush(stdin);
       if(!strcmp(op,cond)) 
       {
            q=fopen(file,"r");int i,yy,clr;
            if(!q==0)
            {  textcolor(12);printf("\n\nTime Table : \n");textcolor(15);
               while(!feof(q))
               { 
                  for(i=0;i<8;i++)
                  {
                      fgets(acline,80,q);
                      if((i==0)||(i==1))
                      {
                         if(i==0) { textcolor(11);printf("%s",acline); }
                         if(i==1) { yy=wherey();textcolor(10);printf("%s",acline); textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]);textcolor(9);gotoxy(6,yy);printf("%c%c%c",acline[5],acline[6],acline[7]);textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} printf("\n");}
                      }
                      else if ((i>1)&&(i<7)) {yy=wherey();textcolor(15); printf("%s",acline);textcolor(0);gotoxy(1,yy);printf("%c%c%c",acline[0],acline[1],acline[2]); gotoxy(18,yy); textcolor(12); textcolor(11);gotoxy(4,yy);printf("|");for(clr=1;clr<67;clr=clr+11) {gotoxy(15+clr,yy);printf("|");} printf("\n");}
                      else { textcolor(11); printf("%s",acline); }
                  }
               }
            }fclose(q);
         /*puts(buf1);
         puts(buf2);
         puts(buf3);
         puts(buf4);
         puts(buf5);
         puts(buf6);
         puts(buf7);
         puts(buf8);*/
       }
     }
     else { textcolor(12);printf("\nTime Table is canceled");}
     textcolor(15);
     printf("\nPress any key to return to Admin menu");
     getch();
     admin();
}

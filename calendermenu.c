#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void calender();
void mainmenu();
void calendermenu()
{
     calender();
     textcolor(15);
     printf("Enter any key to return to main menu");
     getch();
     mainmenu();
}

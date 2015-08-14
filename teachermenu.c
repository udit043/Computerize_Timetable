#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void mainmenu();
void TviewTT();
void teachermenu()
{
     TviewTT();
     printf("Enter any key to return to main menu");
     getch();
     mainmenu();
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void mainmenu();
void stuview();
void studentmenu()
{
     stuview();
     printf("Enter any key to return to main menu");
     getch();
     mainmenu();
}

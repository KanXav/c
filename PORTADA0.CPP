#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <dos.h>

void marco();

void marco()
{
 int i,j; //Variables locales

 for(i=1;i<=80;i++)
 {
  gotoxy(i,1); cprintf("Û");
  gotoxy(i,24); cprintf("Û");
  delay(20);

}
for (j=1; j<=24; j++)
{
 gotoxy(1,j); cprintf("Û");
 gotoxy(80,j); cprintf("Û");
 delay(20);
 }
}


void main()
{
 clrscr();
 marco();
 textcolor(RED);
 textbackground(BLUE);
 gotoxy(2,2); cprintf("CCH VALLEJO");
 gotoxy(76,2); cprintf("UNAM");
 gotoxy(35,2); cprintf("SC/DS-25-2-V");
 gotoxy(28,10); cprintf("Rodriguez Camacho Rafael");
 gotoxy(37,9); cprintf("ALUMNO");
 gotoxy(36,12); cprintf("PROFESOR");
 gotoxy(29,13); cprintf("Diego Gonzalez Sanchez");
   getch();
}
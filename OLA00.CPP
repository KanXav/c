/*librerias para el programa*/

//Programador> Kan
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char nombre[5];

void main ()
{
 clrscr();
 textcolor(9);
 gotoxy(35,12);  cprintf("Ingresa tu nombre ");
 gets(nombre);
 gotoxy(25,13); cprintf("Bienbenido %s, a la clase de programaci•n", nombre);
 getch();

}
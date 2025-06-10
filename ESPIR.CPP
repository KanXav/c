# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <dos.h>
# include <time.h>

int x1, x2, y1, y2, i, j;

void main()
{
 clrscr();
 do{
  x1=1;  y1=1; x2=80; y2=24;
  textcolor(rand()%15+1);

 do{
  for(i=(x1-1);i<=x2;i++)     {gotoxy(i,y1); cprintf("Û"); delay(0);}
  for(j=y1;j<=y2;j++)         {gotoxy(x2,j); cprintf("Û"); delay(0);}
  for(i=x2;i>=x1;i--)         {gotoxy(i,y2); cprintf("Û"); delay(0);}
  for(j=y2;j>=(y1+2);j--)     {gotoxy(x1,j); cprintf("Û"); delay(0);}
   x1+=2;	y1+=2;		x2-=2;		 y2-=2;

  }while(x1<12);
  }while(!kbhit());
 getch();




}
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

int i, limite;

void main()
{
 clrscr();
 limite=100;
 for(i=1;i<=limite;i++)
 {
  if(i%2==0){textcolor(2);}
	 else{textcolor(3);}
  cprintf("%20d ",i);
 }
 getch();
}
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
int i,x1,y1,x2,y2;
void margen()
{
for(i=1; i<= 80; i++){
gotoxy(i,15); cprintf("ß");
gotoxy(i,2); cprintf("Û");
}
for(i=3; i<= 25; i++){
gotoxy(1,i);printf("Û");
gotoxy(80,i);printf("Û");
}
for(i=1; i<= 80; i++){
gotoxy(i,24); cprintf("Û");
}
for(i=2; i<= 13; i++){
gotoxy(60,i);printf("Ý");
}
for(i=2; i<= 68; i++){
gotoxy(i,21); cprintf("=");
}
for(i=2; i<= 68; i++){
gotoxy(i,18); cprintf("=");
}
for(i=2; i<= 68; i++){
gotoxy(i,15); cprintf("=");
}

}


int g1, avg1, g2, avg2, g3, avg3, ap,  m, eds;

void main()

{clrscr();
margen();
 do{
    gotoxy(1,1);  cprintf("Elije tu saldo ");
    gotoxy(1,2);  scanf("%d",&eds);
   }while(eds<=0);
 do{
 clrscr();
 margen();
 randomize();
 g1=1; g2=1; g3=1;
 textcolor(15);
 do{
    gotoxy(1,2);  cprintf("¨A que corredor le apuestas? ");
    gotoxy(65,2); cprintf("1:Magenta ");
    gotoxy(65,3); cprintf("2:Rojo ");
    gotoxy(65,4); cprintf("3:Azul ");
    gotoxy(1,3);  scanf("%d",&ap);
   }while( ap<1 || ap>3 );

     do{
	gotoxy(1,1);  cprintf(" Tu saldo es $ %d ",eds);
	gotoxy(1,4);  cprintf("¨Cuanto vas a apostar? ");
	gotoxy(1,5);  scanf("%d",&m);
       }while(m>eds || m<0);

 clrscr();
 margen();
  gotoxy(79,23); cprintf("3");  gotoxy(79,22); cprintf("2");  gotoxy(79,21); cprintf("1");

  for(i=21;i<=24;i++)
  {gotoxy(69,i); cprintf("º");}

  do{
    gotoxy(g1,21); textcolor(MAGENTA); cprintf("000c");
    gotoxy(g2,22); textcolor(RED);     cprintf("000c");
    gotoxy(g3,23); textcolor(BLUE);    cprintf("000c"); delay(50);
    gotoxy(g1,21); textcolor(0);       cprintf("000c");
    gotoxy(g2,22); textcolor(0);       cprintf("000c");
    gotoxy(g3,23); textcolor(0);       cprintf("000c");

    avg1=rand()%5;     g1+=avg1;
    avg2=rand()%5;     g2+=avg2;
    avg3=rand()%5;     g3+=avg3;
    }while(g1<70 && g2<70 && g3<70);

     gotoxy(g1-avg1,21); textcolor(MAGENTA); cprintf("000c");
     gotoxy(g2-avg2,22); textcolor(RED);     cprintf("000c");
     gotoxy(g3-avg3,23); textcolor(BLUE);    cprintf("000c");


   if( g1>g2 && g1>g3 ){
		       textcolor(5);

			gotoxy(3,2); cprintf("Gano el Magenta");
			       if(ap==1){i=1;}
		      }
  if( g2>g1 && g2>g3 ){
		       textcolor(4);
		       gotoxy(3,2); cprintf("Gano el Rojo");
		       if(ap==2){i=1;}
		      }
  if( g3>g1 && g3>g2 ){
			textcolor(3);
			gotoxy(3,2); cprintf("Gano el Azul");
			if(ap==3){i=1;}
		       }
 textcolor(15);
	 if(i==1){gotoxy(3,4);cprintf("Gano la apuesta usted");
		  eds+=m;
		  gotoxy(3,12);cprintf("Tu saldo final es de %d ",eds);
		  }
	     else{gotoxy(3,4);cprintf("Perdio la apuesta usted");
		  eds-=m;
		  gotoxy(3,5);cprintf("Tu saldo final es de %d ",eds);
		 }
 getch();
 }while(eds>0);
}
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int orig, tipoc;
float cant, cam ;
int i,j,p,x1,x2,y1,y2;
float monedav[12]={1,19.91,47.83,0.015,5.44,0.59,14.72,0.22,0.14,23.707,22.14,0.24};

void margen();	void pinta();


void margen()
{
  textcolor(WHITE);
  for(i=x1;i<=x2;i++)         {gotoxy(i,y1); cprintf("Í");
			       gotoxy(i,y2); cprintf("Í");
			      }
 for(j=y1;j<=y2;j++)         {gotoxy(x2,j); cprintf("º");
			       gotoxy(x1,j); cprintf("º");
			      }
 gotoxy(x1,y1); cprintf("É");
 gotoxy(x2,y1); cprintf("»");
 gotoxy(x1,y2); cprintf("È");
 gotoxy(x2,y2); cprintf("¼");
}

void pinta()
{

 gotoxy(1,1),  printf("1. Peso Mexicano");
 gotoxy(1,2),  printf("2. Dolar Americano");
 gotoxy(1,3),  printf("3. Peso Argentino");
 gotoxy(1,4),  printf("4. Won");
 gotoxy(1,5),  printf("5. Dirham");
 gotoxy(1,6),  printf("6. Libra");
 gotoxy(62,1), printf("7. Dolar Canadiense");
 gotoxy(62,2), printf("8. Rublo");
 gotoxy(62,3), printf("9. Yen");
 gotoxy(62,4), printf("10. Franco");
 gotoxy(62,5), printf("11. Euro");
 gotoxy(62,6), printf("12. Rupia");

 /* MARGEN TOTAL*/
 x1=20; y1=1;  x2=60; y2=24;  margen();

 /*PANTALLA*/
 x1=20; y1=8;  x2=60; y2=8;   margen();

 /*PRIMERA FILA*/
 x1=24; y1=9; x2=34; y2=11;  margen();
 x1=35; y1=9; x2=45; y2=11;  margen();
 x1=46; y1=9; x2=56; y2=11;  margen();
 gotoxy(26,10), printf("Peso Mx.");
 gotoxy(37,10), printf("Dolar A.");
 gotoxy(48,10), printf("Peso Ar.");

 /*SEGUNDA FILA*/
 x1=24; y1=13; x2=34; y2=15;  margen();
 x1=35; y1=13; x2=45; y2=15;  margen();
 x1=46; y1=13; x2=56; y2=15;  margen();
 gotoxy(26,14), printf("  Won  ");
 gotoxy(37,14), printf("Dirhams");
 gotoxy(48,14), printf(" Libra ");

 /*TERCERA FILA*/
 x1=24; y1=17; x2=34; y2=19;  margen();
 x1=35; y1=17; x2=45; y2=19;  margen();
 x1=46; y1=17; x2=56; y2=19;  margen();
 gotoxy(26,18), printf("Dolar C.");
 gotoxy(37,18), printf(" Rublo ");
 gotoxy(48,18), printf("  Yen ");

 /*CUARTA FILA*/
 x1=24; y1=21; x2=34; y2=23;  margen();
 x1=35; y1=21; x2=45; y2=23;  margen();
 x1=46; y1=21; x2=56; y2=23;  margen();
 gotoxy(26,22), printf("Franco S");
 gotoxy(37,22), printf(" Euro");
 gotoxy(48,22), printf(" Rupia");

}

void main()
{
 clrscr();

 /*preguntas*/
 pinta();

 do{
 gotoxy(22,2), printf("Que moneda quieres cambiar? ");
 gotoxy(22,3), scanf("%d",&orig); clrscr();pinta();
   }while((orig<=0) || (orig>=13));
 do{
 gotoxy(22,2), printf("Cuanto quieres cambiar? ");
 gotoxy(22,3),scanf("%f",&cant); clrscr(); pinta();
   }while(cant<=0);
 do{
 gotoxy(22,2), printf("A que moneda quieres cambiar? ");
 gotoxy(22,3),scanf("%d",&tipoc); clrscr();pinta();
   }while( ((tipoc<=0) || (tipoc>=13)) && (tipoc==orig));

  clrscr();


 /*operaciones*/
 cam=cant*monedav[orig-1];
 cam=cam/monedav[tipoc-1];
 pinta();

 /*resultados*/
 gotoxy(22,2), printf("La convercion de tu dinero es: ");

 gotoxy(22,3), printf("%f",cam);




getch();



}
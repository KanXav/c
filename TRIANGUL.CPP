# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

int a,b,c;

void main()
{
 clrscr();
 printf("Ingresa los valores de cada lado");
 scanf("%d%d%d",&a,&b,&c);
 if( (a+b>c)&&(a+c>b)&&(b+c>a) ) {
				   printf("Si se puede construir un triangulo");
				   getch();
				  }
			      else{
				   printf("No se puede construir un trangulo");
				   getch();
				  }






}
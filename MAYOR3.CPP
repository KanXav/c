# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

int a,b,c;

void main()
{
 clrscr();
 printf("Ingresa tres numeros diferentes: ");
 scanf("%d%d%d",&a,&b,&c);

 if( (a>b)&&(a>c) ) {
		     printf("El mayor es %d",a);
		     getch();
		     }
 if( (b>a)&&(b>c) ) {
		     printf("El mayor es %d",b);
		     getch();
		     }
 if( (c>a)&&(c>b) ) {
		     printf("El mayor es %d",c);
		     getch();
		     }
 if( (a==b)||(a==c)||(b==c) ) {
		     printf("Algunos numeros son iguales");
		     getch();
		     }

}
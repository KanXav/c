# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <dos.h>
# include <time.h>
# include <math.h>


float n1,n2,r;
char tekla;

void main()
{
 do{
 clrscr();
 printf("Ingresa un numero:  "); scanf("%f",&n1);
 tekla=getch();
 switch(tekla){
	       case '+':{
			 printf("+ ingresa otro numero "); scanf("%f",&n2);
			 r=n1+n2;
			 printf("%f + %f = %f",n1,n2,r);
			 getch();
			 break;
			}
	       case '-':{
			 printf("- ingresa otro numero "); scanf("%f",&n2);
			 r=n1-n2;
			 printf("%f - %f = %f",n1,n2,r);
			 getch();
			 break;
			 }
	       case '/':{
			 printf("/ ingresa otro numero "); scanf("%f",&n2);
			 r=n1/n2;
			 printf("%f / %f = %f",n1,n2,r);
			 getch();
			 break;
			 }
	       case '*':{
			 printf("* ingresa otro numero "); scanf("%f",&n2);
			 r=n1*n2;
			 printf("%f * %f = %f",n1,n2,r);
			 getch();
			 break;
			 }
	       case 'r':{
			 printf(" = ");
			 r=sqrt(n1);
			 printf("la raiz cuadrada de %f es %f",n1,r);
			 getch();
			 break;
			 }
	       case 'p':{
			 printf("^ ingresa la potencia "); scanf("%f",&n2);
			 r=pow(n1,n2);
			 printf("%f ^ %f = %f",n1,n2,r);
			 getch();
			 break;
			}
	       case 't':{
			 printf("TAN = ");
			 r=tan(n1);
			 printf("la tangente de %f es %fø",n1,r);
			 getch();
			 break;
			}
	       case 'e':{
			 printf("SEN = ");
			 r=sin(n1);
			 printf("el seno de %f es %fø",n1,r);
			 getch();
			 break;
			}
	       case 'o':{
			 printf("COS = ");
			 r=cos(n1);
			 printf("el coseno de %f es %fø",n1,r);
			 getch();
			 break;
			}
	       case 'g':{
			 printf("cotang. = ");
			 r=1/tan(n1);
			 printf("la cotangente de %f es %fø",n1,r);
			 getch();
			 break;
			}
		case 's':{
			 printf("sec. = ");
			 r=1/cos(n1);
			 printf("la secante de %f es %fø",n1,r);
			 getch();
			 break;
			}
		case 'c':{
			 printf("cosec. = ");
			 r=1/sin(n1);
			 printf("la cosecante de %f es %fø",n1,r);
			 getch();
			 break;
			}
	       default:{printf("ERMAc");}
	      }

 }while(tekla!=27);
}
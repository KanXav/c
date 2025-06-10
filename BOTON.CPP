#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>

int GD=DETECT, GM;
int x1, y1, x2, y2; //vareables de creaciond el boton
int c1, c2; //color del boton
char tekla; //opcion de elejir
int frasee;
int base[10]={263,407,228,442,412,442,377,407,263,407};

char amor [7][150]={
		    "El Amor no se busca, llega como el viento",
		    "Donde hay fe en el Corazon el Amor florece",
		    "Tienes que aprender de amor como las estrellas. No dejes de brillar",
		    "Aunque el tiempo pase, lo que el alma ama jamas de olvida",
		    "Cuando tus ojos se cruzen con los suyos el universo quedara en silencio",
		    "No temas al vacio, pues alli se encuentra el amor verdadero",
		    "El susurro del viento lleva tu nombre a quien te espera"
		   };

char dinero [7][100]={
		      "El dinero llegara a ti como el rio que encuentra su cauce",
		      "HabrÖ äpocas de sequça y äpocas de lluvia, aprende a sembrar en ambas",
		      "El dinero fluye si lo dejas crecer con paciencia",
		      "La abundancia se refleja mas en tus actos que en tus cuentas",
		      "La fortuna ama la mente diciplinada",
		      "La prosperidad empieza en tu mente",
		      "El dinero sirve, pero no gobierna"
		     };
char futuro [7][100]={
		      "Tu futuro es como un libro usado, las palabras son tuyas",
		      "Tu futuro depende de tu valentia para avanzar",
		      "El tiempo te ense§ara lo que ahora no comprendes",
		      "La luz que buscas ya estÖ dentro de ti",
		      "En tu futuro hay retos pero tambien grandes victorias",
		      "Donde otros ven limites, tu veras oportunidades",
		      "Tu destino cambia con cada decisiïn que tomas"
		     };
char trabajo [7][100]={
		      "Llegaran nuevos retos",
		      "La perseverancia serla la clave",
		      "Tu pasion por lo que haces inspirara a otros",
		      "Confia en tu intuiciïn para tomar deciciones clave",
		      "Un cambio de rumbo te traera la claridad que buscabas",
		      "La creatuvidad sera tu mayor fortaleza",
		      "Los desafios forjan tu caracter"
		     };



void pboton();

void pboton()
{
 int i;
 setfillstyle(SOLID_FILL,7);
 bar(x1,y1,x2,y2);
 for(i=1;i<=5;i++)
 {
  setcolor(c1);
  line(x1-i,y1-i,x2+i,y1-i);//superior
  line(x1-i,y1-i,x1-i,y2+i);//izquierda
					      //botones
  setcolor(c2);
  line(x1-i,y2+i,x2+i,y2+i);//inferior
  line(x2+i,y1-i,x2+i,y2+i);//derecha
 }
 rectangle(20,170,620,230);//cuadro


  setcolor(LIGHTMAGENTA);  //CONTORNO
 setfillstyle(SOLID_FILL,LIGHTMAGENTA);//RELLENO




 drawpoly(5,base);    //base
 fillpoly(5,base);

 setcolor(CYAN);  //CONTORNO
 setfillstyle(SOLID_FILL,CYAN);//RELLENO

 pieslice(320,351,0,360,80);     //CIRCULO
 circle(320,351,80);
}

void main()
{
 initgraph(&GD,&GM,"C:\\TURBOC3\\BGI");
 cleardevice();
 randomize();
 do{
    setfillstyle(SOLID_FILL,0);
    bar(5,170,640,230 );
    //boton 1
    c1=8; c2=15;	 x1=15;  y1=15; x2=115; y2=45;   pboton();
    setcolor(16);  outtextxy(20,23,"Amor");
    setcolor(4);   outtextxy(20,23,"A");
    //boton 2
    c1=8; c2=15;	 x1=145; y1=15; x2=245; y2=45;   pboton();
    setcolor(16);  outtextxy(150,23,"Futuro");
    setcolor(4);   outtextxy(150,23,"F");
    //boton 3
    c1=8; c2=15;         x1=275; y1=15; x2=375; y2=45;   pboton();
    setcolor(16);  outtextxy(280,23,"Dinero");
    setcolor(4);   outtextxy(280,23,"D");
    //boton 4
    c1=8; c2=15;         x1=405; y1=15; x2=502; y2=45;   pboton();
    setcolor(16);  outtextxy(410,23,"Trabajo");
    setcolor(4);   outtextxy(410,23,"T");

    tekla=getch();
    switch(tekla){
		  case 'a':
		  case 'A':{
			    frasee=rand()%5;
			    x1=15;  y1=15; x2=115; y2=45;
			    c1=15;   c2=8;   pboton();
			    setcolor(16);  outtextxy(22,25, "Amor");
			    setcolor(4);   outtextxy(22,25,"A");
			    delay(100);
			    outtextxy(50,190, amor[frasee]);
			    getch();
			    break;
			   }
		  case 's':
		  case 'S':{
			    frasee=rand()%5;
			    x1=145; y1=15; x2=245; y2=45;
			    c1=15;   c2=8;   pboton();
			    setcolor(16);  outtextxy(152,25,"Futuro");
			    setcolor(4);   outtextxy(152,25,"F");
			    delay(100);
			    outtextxy(50,190, futuro[frasee]);
			    getch();
			    break;
			   }
		 case 'd':
		 case 'D':{
			   frasee=rand()%5;
			   x1=275; y1=15; x2=375; y2=45;
			   c1=15;   c2=8;   pboton();
			   setcolor(16);  outtextxy(282,25,"Dinero");
			   setcolor(4);   outtextxy(282,25,"D");
			   delay(100);
			   outtextxy(50,190, dinero[frasee]);
			   getch();
			   break;
			  }
		 case 'f':
		 case 'F':{
			   frasee=rand()%5;
			   x1=405; y1=15; x2=502; y2=45;
			   c1=15;   c2=8;   pboton();
			   setcolor(16);  outtextxy(412,25,"Trabajo");
			   setcolor(4);   outtextxy(412,25,"T");
			   delay(100);
			   outtextxy(50,190, trabajo[frasee]);
			   getch();
			   break;
			  }
		 }
   }while(tekla!=27);
}
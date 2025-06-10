#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>


#define R 4
#define B 15
#define A 1
#define Y 14
#define M 5
#define C 3


//R [4]={BLUE,RED,YELLOW,PINK};

int fantasma  [14] [14]={0,0,0,0,0,R,R,R,0,0,0,0,0,0,
			 0,0,0,R,R,R,R,R,R,R,R,0,0,0,
			 0,0,R,R,R,R,R,R,R,R,R,R,0,0,
			 0,R,R,R,B,B,R,R,R,R,B,B,R,0,
			 0,R,R,B,B,B,B,R,R,B,B,B,B,0,
			 0,R,R,B,B,A,A,R,R,B,B,A,A,0,
			 R,R,R,B,B,A,A,R,R,B,B,A,A,R,
			 R,R,R,R,B,B,A,A,R,R,B,B,R,R,
			 R,R,R,R,R,R,R,R,R,R,R,R,R,R,
			 R,R,R,R,R,R,R,R,R,R,R,R,R,R,
			 R,R,R,R,R,R,R,R,R,R,R,R,R,R,
			 R,R,R,R,R,R,R,R,R,R,R,R,R,R,
			 R,R,R,R,0,R,R,R,R,0,R,R,R,R,
			 0,R,R,0,0,0,R,R,0,0,0,R,R,0};
int GD=DETECT, MG;
int i,j,xf,yf,op;
//int xf [4]={BLUE,RED,YELLOW,PINK};
//int yf [4]={BLUE,RED,YELLOW,PINK};
 int t [4]={R,Y,M,C};
void pfantasma();

void pfantasma()
{
 for(i=0;i<14;i++)
  for(j=0;j<14;j++)
   {putpixel(xf+j,yf+i,fantasma[i][j]);}
}
void main()
{
 initgraph(&GD,&MG,"C:\\TURBOC3\\BGI");
 cleardevice();
 randomize();
 xf=320;
 yf=240;

 setfillstyle(SOLID_FILL,16);
	       setcolor(16);

 do{

    op=rand()%4;
    pfantasma();   delay(150);

    switch(op){
	       case 0:{
	       bar(xf,yf,xf+20,yf+20);
	       xf+=5;
	       break;
	       }
	       case 2:{
	       bar(xf,yf,xf+20,yf+20);
	       xf-=5;
	       break;
	       }
	       case 1:{
	       bar(xf,yf,xf+20,yf+20);
	       yf+=5;
	       break;
	       }
	       case 3:{
	       bar(xf,yf,xf+20,yf+20);
	       xf-=5;
	       break;
	       }





 }
    }while(!kbhit());
 }











 



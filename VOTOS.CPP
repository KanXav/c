# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <dos.h>

int azar,voto, votos, PRI, MC, PCM;

void main()
{
 clrscr();
 printf("Total de votos a contar ");
 scanf("%d",&votos);
 randomize();
 PRI=0; MC=0; PCM=0;
 for(voto=1;voto<=votos;voto++)
 {
  azar=rand()%3;
  if(azar==0){PRI++;}

  if(azar==1){MC++;}

  if(azar==2){PCM++;}
 }
 gotoxy(4,5);printf("PRI obtuvo %3d votos",PRI);

 gotoxy(4,6);printf("MC obtuvo %3d votos",MC);

 gotoxy(4,7);printf("PCM obtuvo %3d votos",PCM);

 if ( (PRI>MC) && (PRI>PCM)){gotoxy(10,10); printf("GANO EL PRI");}
  if ( (MC>PRI) && (MC>PCM)){gotoxy(10,10); printf("GANO EL MC");}
   if ( (PCM>MC) && (PCM>PRI)){gotoxy(10,10); printf("GANO EL PCM");}

 gotoxy(30,5);
 printf(" Con un porcentaje del %3.2f \%",( (PRI*1.0)/(votos*1.0) ) * 100);

 gotoxy(30,6);
 printf(" Con un porcentaje del %3.2f \%",( (MC*1.0)/(votos*1.0) ) * 100);

 gotoxy(30,7);
 printf(" Con un porcentaje del %3.2f \%",( (PCM*1.0)/(votos*1.0) ) * 100);

 getch();
}
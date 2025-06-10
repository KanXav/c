#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>

# define R 4
# define W 15
# define B 1

//int R [3]={RED, YELLOW, BLUE};


int ghost[14][14] = {
    0,0,0,0,0,R,R,R,R,0,0,0,0,0,
    0,0,0,R,R,R,R,R,R,R,R,0,0,0,
    0,0,R,R,R,R,R,R,R,R,R,R,0,0,
    0,R,R,R,W,W,R,R,R,R,W,W,R,0,
    0,R,R,W,W,W,W,R,R,W,W,W,W,0,
    0,R,R,W,W,B,B,R,R,W,W,B,B,0,
    R,R,R,W,W,B,B,R,R,W,W,B,B,R,
    R,R,R,R,W,W,R,R,R,R,W,W,R,R,
    R,R,R,R,R,R,R,R,R,R,R,R,R,R,
    R,R,R,R,R,R,R,R,R,R,R,R,R,R,
    R,R,R,R,R,R,R,R,R,R,R,R,R,R,
    R,R,R,R,R,R,R,R,R,R,R,R,R,R,
    R,R,R,R,0,R,R,R,R,0,R,R,R,R,
    0,R,R,0,0,0,R,R,0,0,0,R,R,0
};

int GD = DETECT, MG;

int i, j;
int xf[3], yf[3]; // Posiciones de los fantasmas
int op[3]; // Direcciones de movimiento de los fantasmas

void pghost(int index, int colors) {
   setcolor(R); // Establecer el color del fantasma
    for (i = 0; i < 14; i++)
	for (j = 0; j < 14; j++) {
	   if (ghost[i][j] != 0) {
	    // Solo dibujar píxeles que no sean


		putpixel(xf[index] + j, yf[index] + i,ghost[i][j]);

	    }
	}
}

void main() {
    initgraph(&GD, &MG, "C:\\TURBOC3\\BGI");
    cleardevice();

    // Inicializar posiciones y colores de los fantasmas
    xf[0] = 320; yf[0] = 240; // Fantasma 1
    xf[1] = 350; yf[1] = 240; // Fantasma 2
    xf[2] = 380; yf[2] = 240; // Fantasma 3



    randomize();

    do {
	for (int k = 0; k < 3; k++) {
	    // Borrar el fantasma anterior
	    setfillstyle(SOLID_FILL, 0); // Color de fondo (negro)
	    setcolor(16); // Color de fondo
	    for (i = 0; i < 14; i++)
		for (j = 0; j < 14; j++) {
		    if (ghost[i][j] != 0) { // Solo borrar píxeles que no sean 0
			putpixel(xf[k] + j, yf[k] + i, 16); // Borrar el fantasma
		    }
		}

	    // Elegir una dirección aleatoria
	    op[k] = rand() % 4;

	    // Mover el fantasma
	    switch (op[k]) {
		case 0: xf[k] += 7; break; // Derecha
		case 1: yf[k] += 7; break; // Abajo
		case 2: xf[k] -= 7; break; // Izquierda
		case 3: yf[k] -= 7; break; // Arriba
	    }

	    // Dibujar el fantasma
	    pghost(k, colors[k]);
	}

	delay(80); // Esperar un tiempo antes de la siguiente iteración
    } while (!kbhit()); // Continuar hasta que se presione una tecla


}
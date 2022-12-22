/* MAKING A RACTANGLE */ 

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

void main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "");
	rectangle(200,200,250,250);
	getch();
	closegraph();
}

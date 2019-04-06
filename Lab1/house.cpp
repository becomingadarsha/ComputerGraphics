//House pic

#include<stdio.h>
#include<graphics.h>

int main(){
	int gd = DETECT,gm;
	
	initgraph(&gd, &gm ,"NULL");
	setcolor(3);
	
	//rectangle(int left, int top, int right, int bottom);
	
 rectangle(150,180,250,300); //first rectangle where door lies
  rectangle(250,180,420,300); //second rectangle where windows lies
  rectangle(300,200,340,230); //window
  rectangle(180,250,220,300); //door
    
 
    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);


	getch();
	closegraph();
}

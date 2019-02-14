//DDA Algorithm 
#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

int main( )
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	float xincr, yincr;
	
	int i,gd=DETECT,gm;
 
	initgraph(&gd,&gm,"NULL");
 
	printf("Enter the value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);
 
	dx=abs(x2-x1);
	dy=abs(y2-y1);
 
	if(dx>=dy)
		step=dx;
	else
		step=dy;
 
	xincr=dx/step;
	yincr=dy/step;
 
	x=x1;
	y=y1;

	putpixel(x,y,10);
	for(i=1;i<=step;i++)
	{
		putpixel(round(x),round(y),10);
		x=x+xincr;
		y=y+yincr;
	}

	getch();
 	closegraph();
}

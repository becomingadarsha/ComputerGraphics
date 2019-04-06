//rotate triangle about centroid by 60 degree

#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#define PI 3.14
int main()
{
	int gd=DETECT,gm;
	int x1,x2,x3,y1,y2,y3,xc,yc,d,cx,cy;
	float r;		
	
	printf("enter the 1st vertex of triangle\n");
	scanf("%d %d",&x1,&y1);
	printf("enter the 2nd vertex of the triangle\n");
	scanf("%d %d",&x2,&y2);
	printf("enter the 3rd vertex of the triangle\n");
	scanf("%d %d",&x3,&y3);
	printf("enter the degree of rotation\n");
	scanf("%d",&d);
	
	xc=(x1+x2+x3)/3;
	yc=(y1+y2+y3)/3;
	r=(PI/180)*d;
	
	cx=xc*(1-cos(r))+sin(r)*yc;
	cy=yc*(1-cos(r))-sin(r)*xc;
	
	
	initgraph(&gd,&gm,"");
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x1,y1,x3,y3);
	
	line(x1*cos(r)-y1*sin(r)+cx,x1*sin(r)+y1*cos(r)+cy,x2*cos(r)-y2*sin(r)+cx,x2*sin(r)+y2*cos(r)+cy);
	line(x2*cos(r)-y2*sin(r)+cx,x2*sin(r)+y2*cos(r)+cy,x3*cos(r)-y3*sin(r)+cx,x3*sin(r)+y3*cos(r)+cy);
	line(x1*cos(r)-y1*sin(r)+cx,x1*sin(r)+y1*cos(r)+cy,x3*cos(r)-y3*sin(r)+cx,x3*sin(r)+y3*cos(r)+cy);
	
	getch();
	closegraph();
	return 0;
}

